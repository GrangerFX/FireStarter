#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_evolvedInstructionsData);
    result = result && packet.Packetize(m_optimizedInstructionsData);
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

void FireStarterProgram::RandomProgram(unsigned long long &seed)
{
    EvolvedInstructions()->Randomize(seed, m_settings.m_instructions, m_settings.m_registers, m_settings.m_patternOpcodes);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned long long& seed)
{
    unsigned int index = RANDOMMOD(seed, m_settings.m_instructions);
    EvolvedInstructions()->SetRandom(index, seed, m_settings.m_registers, m_settings.m_opcodes);
} // RandomInstruction

void FireStarterProgram::RandomInstruction(unsigned long long& seed, unsigned int index)
{
    EvolvedInstructions()->SetRandom(index, seed, m_settings.m_registers, m_settings.m_opcodes);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions* instructions)
{
    memcpy(m_evolvedInstructionsData.data(), instructions, InstructionsSize());
    memcpy(m_optimizedInstructionsData.data(), instructions, InstructionsSize());
} // LoadInstructions

void FireStarterProgram::SettingsText(const FireStarterSettings &settings, std::string& code, const std::string &prefix, const std::string& postfix)
{
    code += prefix + Format("variations = %u", settings.m_variations) + postfix + "\r\n";
    code += prefix + Format("samples = %u", settings.m_samples) + postfix + "\r\n";
    code += prefix + Format("instructions = %u", settings.m_instructions) + postfix + "\r\n";
    code += prefix + Format("registers = %u", settings.m_registers) + postfix + "\r\n";
    code += prefix + Format("opcodes = %u", settings.m_opcodes) + postfix + "\r\n";
    code += prefix + Format("pattern opcodes = %u", settings.m_patternOpcodes) + postfix + "\r\n";
    code += "\r\n";
    code += prefix + Format("targetMin = %ff", settings.m_targetMin) + postfix + "\r\n";
    code += prefix + Format("targetMax = %ff", settings.m_targetMax) + postfix + "\r\n";
    code += "\r\n";
    code += prefix + Format("mode = %s", settings.Mode()) + postfix + "\r\n";
    code += prefix + Format("seed = %llu", settings.m_seed) + postfix + "\r\n";
    code += prefix + Format("optimize seed = %llu", settings.m_optimizeSeed) + postfix + "\r\n";
    code += prefix + Format("seeds = %u", settings.m_seeds) + postfix + "\r\n";
    code += prefix + Format("tests = %u", settings.m_tests) + postfix + "\r\n";
    code += prefix + Format("units = %u", settings.m_units) + postfix + "\r\n";
    code += prefix + Format("processes = %u", settings.m_processes) + postfix + "\r\n";
    code += prefix + Format("population = %u", settings.m_population) + postfix + "\r\n";
    code += prefix + Format("iterations = %u", settings.m_iterations) + postfix + "\r\n";
    code += prefix + Format("generations = %u", settings.m_generations) + postfix + "\r\n";
    code += prefix + Format("precision = %u", settings.m_precision) + postfix + "\r\n";
    code += prefix + Format("candidates = %u", settings.m_candidates) + postfix + "\r\n";
    code += prefix + Format("attempts = %u", settings.m_attempts) + postfix + "\r\n";
    code += prefix + Format("scale = %ff", settings.m_scale) + postfix + "\r\n";
    code += prefix + Format("startScale = %ff", settings.m_startScale) + postfix + "\r\n";
    code += prefix + Format("startResult = %ff", settings.m_startResult) + postfix + "\r\n";
} // SettingsText

void FireStarterProgram::SaveSettings(std::string& code) const
{
    code += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    code += "{\r\n";
    SettingsText(m_settings, code, "    settings.m_", ";");
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
    m_evolvedInstructionsData.resize(InstructionsSize());
    m_optimizedInstructionsData.resize(InstructionsSize());
    m_evolvedInstructions = EvolvedInstructions();
    m_optimizedInstructions = OptimizedInstructions();
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        m_evolvedInstructions->SetOperation(i);
        m_optimizedInstructions->SetOperation(i);
    }
} // InitProgram
