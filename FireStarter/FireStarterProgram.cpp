#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_instructions);
    result = result && packet.Packetize(&m_settings, sizeof(m_settings));
    result = result && packet.Packetize(m_uniqueRegisters);
    m_registers.resize(m_uniqueRegisters);
    result = result && packet.Packetize(m_registers.data(), m_uniqueRegisters * sizeof(FireStarterRegister));
    return result;
} // Packetize

void FireStarterProgram::OptimizeRegisters(void)
{
    // Delete the unused registers and sort the remaining ones.
    FireStarterInstructions* instructions = Instructions();
    m_uniqueRegisters = 0;
    std::vector<int> dataRegisters(m_settings.m_registers, -1);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int r = instructions->Register(i);
        if (r < m_settings.m_registers) {
            int index = dataRegisters[r];
            if (index == -1) {
                index = m_uniqueRegisters++;
                dataRegisters[r] = index;
            }
            instructions->SetRegister(i, index);
        } else
            printf("Bad register: %u  Max registers: %u\n", r, m_settings.m_registers);
    }
 
    // Optimize the registers based on the ones in use at any point in the code.
    m_registers.resize(m_uniqueRegisters);
    for (unsigned int i = 0; i < m_uniqueRegisters; i++)
        m_registers[i] = FireStarterRegister(i, m_uniqueRegisters, m_uniqueRegisters);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int index = instructions->Register(i);
        FireStarterRegister& reg = m_registers[index];
        if (reg.instructionFirst == m_uniqueRegisters)
            reg.instructionFirst = i;
        reg.instructionLast = i;
    }

    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int index = instructions->Register(i);
        FireStarterRegister& reg = m_registers[index];
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
} // OptimizeRegisters

void FireStarterProgram::RandomProgram(unsigned long long seed)
{
    Instructions()->Randomize(seed, m_settings.m_instructions, m_settings.m_opcodes);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned long long seed)
{
    unsigned int index = RANDOMMOD64(seed, m_settings.m_instructions);
    Instructions()->SetRandom(index, seed, m_settings.m_instructions, m_settings.m_opcodes);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions* instructions)
{
    memcpy(m_instructions.data(), instructions, FireStarterInstructions::InstructionsSize(m_settings.m_instructions));
} // LoadInstructions

void FireStarterProgram::SaveInstructions(FireStarterInstructions* instructions)
{
    memcpy(instructions, m_instructions.data(), FireStarterInstructions::InstructionsSize(m_settings.m_instructions));
} // SaveInstructions

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

void FireStarterProgram::SaveSettings(std::string& code)
{
    code += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    code += "{\r\n";
    SettingsText(m_settings, code, "    settings.m_");
    code += "} // LoadSettings\r\n";
    code += "\r\n";
} // SaveSettings

void FireStarterProgram::SaveProgram(std::string& code)
{
    code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    code += "{\r\n";
    code += "    FireStarterSettings settings;\r\n";
    code += "    LoadSettings(settings);\r\n";
    code += "    program.InitProgram(settings);\r\n";
    code += Format("    program.m_uniqueRegisters = %u;\r\n", m_uniqueRegisters);
    code += "\r\n";

    unsigned int numRegisters = (unsigned int)m_registers.size();
    code += Format("    program.m_registers.resize(%u);\r\n", numRegisters);
    for (unsigned int i = 0; i < numRegisters; i++)
        code += Format("    program.m_registers[%u] = {%u, %u, %u};\r\n", i, m_registers[i].registerIndex, m_registers[i].instructionFirst, m_registers[i].instructionLast);
    code += "\r\n";

    FireStarterInstructions* instructions = Instructions();
    code += "    FireStarterInstructions* instructions = program.Instructions();\r\n";
    for (unsigned int i = 0; i < m_settings.m_instructions; i++)
        code += Format("    instructions->SetOperation(%u, %u, %u);\r\n", i, instructions->Opcode(i), instructions->Register(i));

    code += "} // LoadProgram\r\n";
    code += "\r\n";
} // SaveProgram

void FireStarterProgram::InitProgram(const FireStarterSettings& settings)
{
    m_settings = settings;
    m_instructions.resize(FireStarterInstructions::InstructionsSize(m_settings.m_instructions));
    m_registers.clear();

    FireStarterInstructions* instructions = Instructions();
    for (unsigned int i = 0; i < m_settings.m_instructions; i++)
        instructions->SetOperation(i);
} // InitProgram
