#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_instructions);

    size_t registersSize = m_registers.size();
    result = result && packet.Packetize(&registersSize, sizeof(registersSize));
    m_registers.resize(registersSize);
    result = result && packet.Packetize(m_registers.data(), m_registers.size() * sizeof(m_registers[0]));

    result = result && packet.Packetize(&m_settings, sizeof(m_settings));

    result = result && packet.Packetize(&m_dataSize, sizeof(m_dataSize));
    result = result && packet.Packetize(&m_maxRegisters, sizeof(m_maxRegisters));
    return result;
} // Packetize

void FireStarterProgram::OptimizeRegisters(bool clean)
{
    FireStarterInstructions* instructions = Instructions();

    // Delete the unused registers and sort the remaining ones.
    m_registers.clear();
    std::vector<int> dataRegisters;
    dataRegisters.resize(m_settings.m_registers, -1);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int reg = Instructions()->Register(i);
        if (reg < m_settings.m_registers) {
            int index = dataRegisters[reg];
            if (index == -1) {
                index = (int)m_registers.size();
                dataRegisters[reg] = index;
                m_registers.push_back(FireStarterRegister(clean ? index : reg, index, i, i));
            } else
                m_registers[index].instructionLast = i;
            instructions->SetRegister(i, index);
        } else
            printf("Bad register: %u  Max registers: %u\n", reg, m_settings.m_registers);
    }
    m_dataSize = (unsigned int)m_registers.size();

    // Optimize the registers based on the ones in use at any point in the code.
    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    m_maxRegisters = 0;
    for (unsigned int i = 0; i < m_settings.m_instructions; i++) {
        unsigned int reg = instructions->Register(i);
        if (reg < m_settings.m_registers) {
            FireStarterRegister& r = m_registers[reg];
            if (r.instructionLast > r.instructionFirst)
                if (r.instructionFirst == i) {
                    if (!freeRegisters.empty()) {
                        r.registerIndex = freeRegisters.back();
                        freeRegisters.pop_back();
                    }
                    else
                        r.registerIndex = numActiveRegisters;
                    numActiveRegisters++;
                    m_maxRegisters = max(m_maxRegisters, numActiveRegisters);
                }
                else if (r.instructionLast == i) {
                    freeRegisters.push_back(r.registerIndex);
                    numActiveRegisters--;
                }
        } else
            printf("Bad register: %u  Max registers: %u\n", reg, m_settings.m_registers);
    }
} // OptimizeRegisters

void FireStarterProgram::RandomProgram(unsigned int& seed)
{
    Instructions()->Randomize(seed, m_settings.m_instructions, m_settings.m_opcodes);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned int& seed)
{
    unsigned int index = RANDOMMOD(seed, m_settings.m_instructions);
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

void FireStarterProgram::SaveSettings(std::string& code)
{
    code += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    code += "{\r\n";
    code += Format("    settings.m_instructions = %u;\r\n", m_settings.m_instructions);
    code += Format("    settings.m_registers = %u;\r\n", m_settings.m_registers);
    code += Format("    settings.m_opcodes = %u;\r\n", m_settings.m_opcodes);
    code += Format("    settings.m_variations = %u;\r\n", m_settings.m_variations);
    code += Format("    settings.m_samples = %u;\r\n", m_settings.m_samples);
    code += Format("    settings.m_process = %u;\r\n", m_settings.m_process);
    code += Format("    settings.m_clients = %u;\r\n", m_settings.m_clients);
    code += Format("    settings.m_seed = %u;\r\n", m_settings.m_seed);
    code += "\r\n";
    code += Format("    settings.m_sampleMin = %ff;\r\n", m_settings.m_sampleMin);
    code += Format("    settings.m_sampleMax = %ff;\r\n", m_settings.m_sampleMax);
    code += Format("    settings.m_evolveFactor = %ff;\r\n", m_settings.m_evolveFactor);
    code += Format("    settings.m_evolveStartFactor = %ff;\r\n", m_settings.m_evolveStartFactor);
    code += Format("    settings.m_evolveStartResult = %ff;\r\n", m_settings.m_evolveStartResult);
    code += Format("    settings.m_evolveCandidates = %u;\r\n", m_settings.m_evolveCandidates);
    code += "\r\n";
    code += Format("    settings.m_evolveMode = %u;\r\n", m_settings.m_evolveMode);
    code += Format("    settings.m_evolveStates = %u;\r\n", m_settings.m_evolveStates);
    code += Format("    settings.m_evolveUnits = %u;\r\n", m_settings.m_evolveUnits);
    code += Format("    settings.m_evolvePopulation = %u;\r\n", m_settings.m_evolvePopulation);
    code += Format("    settings.m_evolveIterations = %u;\r\n", m_settings.m_evolveIterations);
    code += Format("    settings.m_evolveGenerations = %u;\r\n", m_settings.m_evolveGenerations);
    code += Format("    settings.m_evolvePrecision = %u;\r\n", m_settings.m_evolvePrecision);
    code += Format("    settings.m_evolveAttempts = %u;\r\n", m_settings.m_evolveAttempts);
    code += "} // LoadSettings\r\n";
    code += "\r\n";
} // FireStarterProgram

void FireStarterProgram::SaveProgram(std::string& code)
{
    code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    code += "{\r\n";
    code += "    FireStarterSettings settings;\r\n";
    code += "    LoadSettings(settings);\r\n";
    code += "    program.InitProgram(settings);\r\n";
    code += Format("    program.m_dataSize = %u;\r\n", m_dataSize);
    code += Format("    program.m_maxRegisters = %u;\r\n", m_maxRegisters);
    code += "\r\n";

    unsigned int numRegisters = (unsigned int)m_registers.size();
    code += Format("    program.m_registers.resize(%u);\r\n", numRegisters);
    for (unsigned int i = 0; i < numRegisters; i++)
        code += Format("    program.m_registers[%u] = {%u, %u, %u, %u};\r\n", i, m_registers[i].dataIndex, m_registers[i].registerIndex, m_registers[i].instructionFirst, m_registers[i].instructionLast);
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
    m_dataSize = settings.m_registers;
    m_maxRegisters = settings.m_registers;
} // InitProgram

FireStarterProgram::FireStarterProgram(void)
{
} // FireStarterProgram
