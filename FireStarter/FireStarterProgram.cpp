#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_evolvedInstructions);
    result = result && packet.Packetize(m_optimizedInstructions);
    result = result && packet.Packetize(&m_settings, sizeof(m_settings));
    result = result && packet.Packetize(m_uniqueRegisters);
    return result;
} // Packetize

void FireStarterProgram::OptimizeRegisters(void)
{
    // Delete the unused registers and sort the remaining ones.
    FireStarterInstructions* instructions = OptimizedInstructions();
    memcpy(instructions, EvolvedInstructions(), InstructionsSize());
    m_uniqueRegisters = 0;
    std::vector<int> dataRegisters(m_settings.m_registers, -1);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int r = instructions->Register(i);
        if (r < m_settings.m_registers) {
            int index = dataRegisters[r];
            if (index == -1)
                dataRegisters[r] = index = m_uniqueRegisters++;
            instructions->SetRegister(i, index);
        } else {
            printf("Bad register: %u  Max registers: %u\n", r, m_settings.m_registers);
            instructions->SetRegister(i, 0);
        }
    }
} // OptimizeRegisters

unsigned int FireStarterProgram::GenerateRegisters(std::vector<FireStarterRegister>& registers) const
{
    // Optimize the registers based on the ones in use at any point in the code.
    const FireStarterInstructions* instructions = OptimizedInstructions();
    unsigned int numInstructions = m_settings.m_instructions;
    unsigned int uniqueRegisters = m_uniqueRegisters ? m_uniqueRegisters : m_settings.m_registers;
    registers.resize(uniqueRegisters);
    for (unsigned int i = 0; i < uniqueRegisters; i++)
        registers[i] = FireStarterRegister(-1, numInstructions, numInstructions);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int index = instructions->Register(i);
        FireStarterRegister& reg = registers[index];
        if (reg.instructionFirst == numInstructions)
            reg.instructionFirst = i;
        reg.instructionLast = i;
    }

    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int index = instructions->Register(i);
        FireStarterRegister& reg = registers[index];
        if (reg.instructionLast > reg.instructionFirst)
            if (reg.instructionFirst == i) {
                if (!freeRegisters.empty()) {
                    reg.registerIndex = freeRegisters.back();
                    freeRegisters.pop_back();
                } else
                    reg.registerIndex = numActiveRegisters;
                numActiveRegisters++;
            } else if (reg.instructionLast == i) {
                freeRegisters.push_back(reg.registerIndex);
                numActiveRegisters--;
            }
    }
    return uniqueRegisters;
} // GenerateRegisters

void FireStarterProgram::RandomProgram(unsigned long long seed)
{
    EvolvedInstructions()->Randomize(seed, m_settings.m_instructions, m_settings.m_opcodes);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned long long seed)
{
    unsigned int index = RANDOMMOD64(seed, m_settings.m_instructions);
    EvolvedInstructions()->SetRandom(index, seed, m_settings.m_instructions, m_settings.m_opcodes);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions* instructions)
{
    memcpy(m_evolvedInstructions.data(), instructions, InstructionsSize());
    memcpy(m_optimizedInstructions.data(), instructions, InstructionsSize());
} // LoadInstructions

void FireStarterProgram::SettingsText(const FireStarterSettings &settings, std::string& code, const std::string &prefix)
{
    code += prefix + Format("variations = %u;\r\n", settings.m_variations);
    code += prefix + Format("samples = %u;\r\n", settings.m_samples);
    code += prefix + Format("instructions = %u;\r\n", settings.m_instructions);
    code += prefix + Format("registers = %u;\r\n", settings.m_registers);
    code += prefix + Format("opcodes = %u;\r\n", settings.m_opcodes);
    code += "\r\n";
    code += prefix + Format("targetMin = %ff;\r\n", settings.m_targetMin);
    code += prefix + Format("targetMax = %ff;\r\n", settings.m_targetMax);
    code += "\r\n";
    code += prefix + Format("mode = %s;\r\n", settings.Mode());
    code += prefix + Format("units = %u;\r\n", settings.m_units);
    code += prefix + Format("processes = %u;\r\n", settings.m_processes);
    code += prefix + Format("population = %u;\r\n", settings.m_population);
    code += prefix + Format("iterations = %u;\r\n", settings.m_iterations);
    code += prefix + Format("candidates = %u;\r\n", settings.m_candidates);
    code += prefix + Format("generations = %u;\r\n", settings.m_generations);
    code += prefix + Format("precision = %u;\r\n", settings.m_precision);
    code += prefix + Format("evolve = %s;\r\n", settings.Evolve());
    code += prefix + Format("attempts = %u;\r\n", settings.m_attempts);
    code += prefix + Format("seed = %u;\r\n", settings.m_seed);
    code += prefix + Format("scale = %ff;\r\n", settings.m_scale);
    code += prefix + Format("startScale = %ff;\r\n", settings.m_startScale);
    code += prefix + Format("startResult = %ff;\r\n", settings.m_startResult);
} // SaveSettings

void FireStarterProgram::SaveSettings(std::string& code) const
{
    code += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    code += "{\r\n";
    SettingsText(m_settings, code, "    settings.m_");
    code += "} // LoadSettings\r\n";
    code += "\r\n";
} // SaveSettings

void FireStarterProgram::SaveProgram(std::string& code) const
{
    code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    code += "{\r\n";

    const FireStarterInstructions* instructions = EvolvedInstructions();
    code += "    FireStarterInstructions* instructions = program.EvolvedInstructions();\r\n";
    for (unsigned int i = 0; i < m_settings.m_instructions; i++)
        code += Format("    instructions->SetOperation(%u, %u, %u);\r\n", i, instructions->Opcode(i), instructions->Register(i));
    code += "    program.OptimizeRegisters();\r\n";

    code += "} // LoadProgram\r\n";
    code += "\r\n";
} // SaveProgram

void FireStarterProgram::InitProgram(const FireStarterSettings& settings)
{
    m_settings = settings;
    m_evolvedInstructions.resize(InstructionsSize());
    m_optimizedInstructions.resize(InstructionsSize());

    FireStarterInstructions* evolvedInstructions = EvolvedInstructions();
    FireStarterInstructions* optimiedInstructions = OptimizedInstructions();
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        evolvedInstructions->SetOperation(i);
        optimiedInstructions->SetOperation(i);
    }
} // InitProgram
