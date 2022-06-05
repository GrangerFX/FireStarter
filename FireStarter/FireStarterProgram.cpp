#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_instructions);

    size_t registersSize = m_registers.size();
    result = result && packet.Packetize(&registersSize, sizeof(registersSize));
    m_registers.resize(registersSize);
    result = result && packet.Packetize(m_registers.data(), m_registers.size() * sizeof(m_registers[0]));

    size_t opcodesSize = m_opcodes.size();
    result = result && packet.Packetize(&opcodesSize, sizeof(opcodesSize));
    m_opcodes.resize(opcodesSize);
    result = result && packet.Packetize(m_opcodes.data(), m_opcodes.size() * sizeof(m_opcodes[0]));

    result = result && packet.Packetize(&m_settings.m_evolveMode, sizeof(m_settings.m_evolveMode));
    result = result && packet.Packetize(&m_settings.m_instructions, sizeof(m_settings.m_instructions));
    result = result && packet.Packetize(&m_settings.m_variations, sizeof(m_settings.m_variations));
    result = result && packet.Packetize(&m_dataSize, sizeof(m_dataSize));
    result = result && packet.Packetize(&m_maxRegisters, sizeof(m_maxRegisters));
    return result;
} // Packetize

void FireStarterProgram::OptimizeRegisters(bool clean)
{
    FireStarterInstructions* instructions = Instructions();

    // Delete the unused registers and sort the remaining ones.
    m_registers.clear();
    m_registers.reserve(m_programInstructions);
    std::vector<int> dataRegisters;
    dataRegisters.resize(m_programInstructions, -1);
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        unsigned int reg = Instructions()->Register(i);
        int index = dataRegisters[reg];
        if (index == -1) {
            index = (int)m_registers.size();
            dataRegisters[reg] = index;
            m_registers.push_back(FireStarterRegister(clean ? index : reg, index, i, i));
        } else
            m_registers[index].instructionLast = i;
        instructions->SetRegister(i, index);
    }
    m_dataSize = (unsigned int)m_registers.size();

    // Optimize the registers based on the ones in use at any point in the code.
    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    m_maxRegisters = 0;
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        unsigned int reg = instructions->Register(i);
        FireStarterRegister& r = m_registers[reg];
        if (r.instructionLast > r.instructionFirst)
            if (r.instructionFirst == i) {
                if (!freeRegisters.empty()) {
                    r.registerIndex = freeRegisters.back();
                    freeRegisters.pop_back();
                } else
                    r.registerIndex = numActiveRegisters;
                numActiveRegisters++;
                m_maxRegisters = max(m_maxRegisters, numActiveRegisters);
            } else if (r.instructionLast == i) {
                freeRegisters.push_back(r.registerIndex);
                numActiveRegisters--;
            }
    }
} // OptimizeRegisters

void FireStarterProgram::RandomProgram(unsigned int& seed)
{
    Instructions()->Randomize(seed, m_programInstructions, m_programOpcodes);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned int& seed)
{
    unsigned int index = RANDOMMOD(seed, m_programInstructions);
    Instructions()->SetRandom(index, seed, m_programInstructions, m_programOpcodes);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions* instructions)
{
    memcpy(m_instructions.data(), instructions, FireStarterInstructions::InstructionsSize(m_programInstructions));
} // LoadInstructions

void FireStarterProgram::SaveInstructions(FireStarterInstructions* instructions)
{
    memcpy(instructions, m_instructions.data(), FireStarterInstructions::InstructionsSize(m_programInstructions));
} // SaveInstructions

void FireStarterProgram::GenerateCode(std::string& code, unsigned int tabs, bool optimize)
{
    FireStarterInstructions* instructions = Instructions();

    // Generate the evaluate function.
    if (m_registers.empty())
        optimize = false;
    std::string indent;
    for (unsigned int i = 0; i < tabs; i++)
        indent += "    ";
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        FireStarterOpcode op = instructions->Opcode(i);
        unsigned int reg = instructions->Register(i);
        switch (op) {
            case Operation_multiply:
                if (optimize && (i == m_registers[reg].instructionLast))
                    code += Format(indent + "n *= data.d[%u];\r\n", reg);
                else
                    code += Format(indent + "n = data.d[%u] *= n;\r\n", reg);
                break;
            case Operation_add:
                if (optimize && (i == m_registers[reg].instructionLast))
                    code += Format(indent + "n += data.d[%u];\r\n", reg);
                else
                    code += Format(indent + "n = data.d[%u] += n;\r\n", reg);
                break;
            case Operation_abs:
                code += Format(indent + "n = fabsf(n);\r\n");
                break;
        }
    }
} // GenerateCode

void FireStarterProgram::GenerateEvaluate(std::string& code, bool optimize)
{
    // Generate the evaluate function.
    code.clear();
    code += "inline float Evaluate(FireStarterData data, float n)\r\n";
    code += "{\r\n";
    GenerateCode(code, 1, optimize);
    code += "    return isfinite(n) ? n : 0.0f;\r\n";
    code += "} // Evaluate\r\n";
} // GenerateEvaluate

void FireStarterProgram::GenerateSolution(std::string& code, FireStarterData& data, bool optimize)
{
    if (m_registers.empty())
        return;

    FireStarterInstructions* instructions = Instructions();

    // Generate the replacement code and update the program.
    if (optimize) {
        code += "    float r0";
        for (unsigned int i = 1; i < m_maxRegisters; i++)
            code += Format(", r%u", i);
        code += ";\r\n";
    }
    else
        for (unsigned int i = 0; i < m_registers.size(); i++)
            code += Format("    float d%u = %.12ff;\r\n", i, data.d[m_registers[i].dataIndex]);
    code += "\r\n";

    for (unsigned int i = 0; i < m_programInstructions; i++) {
        FireStarterOpcode op = instructions->Opcode(i);
        unsigned int reg = instructions->Register(i);
        float f = data.d[reg];
        FireStarterRegister& dataRegister = m_registers[reg];
        unsigned int r = dataRegister.registerIndex;
        if (optimize) {
            switch (op) {
            case Operation_multiply:
                if (i == dataRegister.instructionFirst)
                    if (i == dataRegister.instructionLast)
                        code += Format("    n *= %.8ff;\r\n", f);
                    else
                        code += Format("    r%u = n *= %.8ff;\r\n", r, f);
                else if (i == dataRegister.instructionLast)
                    code += Format("    n *= r%u;\r\n", r);
                else
                    code += Format("    n = r%u *= n;\r\n", r);
                break;
            case Operation_add:
                if (i == dataRegister.instructionFirst)
                    if (i == dataRegister.instructionLast)
                        code += Format("    n += %.8ff;\r\n", f);
                    else
                        code += Format("    r%u = n += %.8ff;\r\n", r, f);
                else if (i == dataRegister.instructionLast)
                    code += Format("    n += r%u;\r\n", r);
                else
                    code += Format("    n = r%u += n;\r\n", r);
                break;
            case Operation_abs:
                code += Format("    n = fabsf(n);\r\n");
                break;
            }
        }
        else {
            switch (op) {
            case Operation_multiply:
                if (i == dataRegister.instructionLast)
                    code += Format("    n *= d%u;\r\n", r);
                else
                    code += Format("    n = d%u *= n;\r\n", r);
                break;
            case Operation_add:
                if (i == dataRegister.instructionLast)
                    code += Format("    n += d%u;\r\n", r);
                else
                    code += Format("    n = d%u += n;\r\n", r);
                break;
            case Operation_abs:
                code += Format("    n = fabsf(n);\r\n");
                break;
            }
        }
    }
} // GenerateSolution

void FireStarterProgram::SaveProgram(std::string& code)
{
    code += "inline void LoadProgram(FireStarterProgram& program, const FireStarterSettings& settings)\r\n";
    code += "{\r\n";
    code += "    program.InitProgram(settings);\r\n";
    code += Format("    program.m_dataSize = %u;\r\n", m_dataSize);
    code += Format("    program.m_maxRegisters = %u;\r\n", m_maxRegisters);
    code += "\r\n";

    code += Format("    program.m_opcodes.resize(%u);\r\n", m_programOpcodes);
    for (unsigned int i = 0; i < m_programOpcodes; i++)
        code += Format("    program.m_opcodes[%u] = (FireStarterOpcode)%u;\r\n", i, fireStarterOpcodes[i]);
    code += "\r\n";

    unsigned int numRegisters = (unsigned int)m_registers.size();
    code += Format("    program.m_registers.resize(%u);\r\n", numRegisters);
    for (unsigned int i = 0; i < numRegisters; i++)
        code += Format("    program.m_registers[%u] = {%u, %u, %u, %u};\r\n", i, m_registers[i].dataIndex, m_registers[i].registerIndex, m_registers[i].instructionFirst, m_registers[i].instructionLast);
    code += "\r\n";

    FireStarterInstructions* instructions = Instructions();
    code += "    FireStarterInstructions* instructions = program.Instructions();\r\n";
    for (unsigned int i = 0; i < m_programInstructions; i++)
        code += Format("    instructions->SetOperation(%u, %u, %u);\r\n", i, instructions->Opcode(i), instructions->Register(i));

    code += "} // LoadProgram\r\n";
    code += "\r\n";
} // SaveProgram

float FireStarterProgram::EmulateProgram(FireStarterData& data, float n)
{
    FireStarterInstructions* instructions = Instructions();

    for (unsigned int i = 0; i < m_programInstructions; i++) {
        float& f = data.d[instructions->Register(i)];

        switch (instructions->Opcode(i)) {
            case Operation_multiply:
                n = f *= n;
                break;
            case Operation_add:
                n = f += n;
                break;
            case Operation_abs:
                n = fabsf(n);
                break;
        }
    }
    return n;
} // EmulateProgram

void FireStarterProgram::InitProgram(const FireStarterSettings& settings)
{
    m_settings = settings;
    m_programInstructions = m_settings.m_instructions;
    m_programOpcodes = m_settings.m_opcodes;
    m_dataSize = m_programInstructions;
    m_maxRegisters = m_programInstructions;
    m_instructions.resize(FireStarterInstructions::InstructionsSize(m_programInstructions));
    FireStarterInstructions* instructions = Instructions();
    for (unsigned int i = 0; i < m_programInstructions; i++)
        instructions->SetOperation(i);
    m_opcodes.resize(m_programOpcodes);
    for (unsigned int i = 0; i < m_programOpcodes; i++)
        m_opcodes[i] = fireStarterOpcodes[i];
} // InitProgram

FireStarterProgram::FireStarterProgram(void)
{
} // FireStarterProgram
