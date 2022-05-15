#include "FireStarterProgram.h"

bool FireStarterProgram::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(&m_instructions, sizeof(m_instructions));

    size_t registersSize = m_registers.size();
    result = result && packet.Packetize(&registersSize, sizeof(registersSize));
    m_registers.resize(registersSize);
    result = result && packet.Packetize(m_registers.data(), m_registers.size() * sizeof(m_registers[0]));

    size_t opcodesSize = m_opcodes.size();
    result = result && packet.Packetize(&opcodesSize, sizeof(opcodesSize));
    m_opcodes.resize(opcodesSize);
    result = result && packet.Packetize(m_opcodes.data(), m_opcodes.size() * sizeof(m_opcodes[0]));

    result = result && packet.Packetize(&m_programMode, sizeof(m_programMode));
    result = result && packet.Packetize(&m_dataSize, sizeof(m_dataSize));
    result = result && packet.Packetize(&m_maxRegisters, sizeof(m_maxRegisters));
    return result;
} // Packetize

void FireStarterProgram::OptimizeRegisters(bool clean)
{
    // Delete the unused registers and sort the remaining ones.
    m_registers.clear();
    m_registers.reserve(m_programInstructions);
    std::vector<int> dataRegisters;
    dataRegisters.resize(m_programInstructions, -1);
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        unsigned int reg = m_instructions.Register(i);
        int index = dataRegisters[reg];
        if (index == -1) {
            index = (int)m_registers.size();
            dataRegisters[reg] = index;
            m_registers.push_back(FireStarterRegister(clean ? index : reg, index, i, i));
        } else
            m_registers[index].instructionLast = i;
        m_instructions.SetRegister(i, index);
    }
    m_dataSize = (unsigned int)m_registers.size();

    // Optimize the registers based on the ones in use at any point in the code.
    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    m_maxRegisters = 0;
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        unsigned int reg = m_instructions.Register(i);
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
    m_instructions.Randomize(seed);
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned int& seed)
{
    unsigned int index = RANDOMSEED(seed) % m_programInstructions;
    m_instructions.SetRandom(index, seed);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions instructions)
{
    m_instructions = instructions;
} // LoadInstructions

void FireStarterProgram::SaveInstructions(FireStarterInstructions& instructions)
{
    instructions = m_instructions;
} // SaveInstructions

void FireStarterProgram::GenerateCode(std::string& code, unsigned int tabs, bool optimize)
{
    // Generate the evaluate function.
    if (m_registers.empty())
        optimize = false;
    std::string indent;
    for (unsigned int i = 0; i < tabs; i++)
        indent += "    ";
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        FireStarterOpcode op = m_instructions.Opcode(i);
        unsigned int reg = m_instructions.Register(i);
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
        FireStarterOpcode op = m_instructions.Opcode(i);
        unsigned int reg = m_instructions.Register(i);
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

void FireStarterProgram::SaveProgram(std::string& code, unsigned int species)
{
    if (species == 0xFFFFFFFF)
        code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    else
        code += Format("inline void LoadProgram%d(FireStarterProgram& program)\r\n", species);
    code += "{\r\n";

    unsigned int numInstructions = m_programInstructions;
    for (unsigned int i = 0; i < numInstructions; i++)
        code += Format("    program.m_instructions.SetOperation(%u, %u, %u);\r\n", i, m_instructions.Opcode(i), m_instructions.Register(i));

    code += Format("    program.m_opcodes.resize(%u);\r\n", PROGRAM_OPCODES);
    for (unsigned int i = 0; i < PROGRAM_OPCODES; i++)
        code += Format("    program.m_opcodes[%u] = (FireStarterOpcode)%u;\r\n", i, fireStarterOpcodes[i]);

    unsigned int numRegisters = (unsigned int)m_registers.size();
    code += Format("    program.m_registers.resize(%u);\r\n", numRegisters);
    for (unsigned int i = 0; i < numRegisters; i++)
        code += Format("    program.m_registers[%u] = {%u, %u, %u, %u};\r\n", i, m_registers[i].dataIndex, m_registers[i].registerIndex, m_registers[i].instructionFirst, m_registers[i].instructionLast);

    code += Format("    program.m_programMode = (FireStarterProgramMode)%u;\r\n", m_programMode);
    code += Format("    program.m_dataSize = %u;\r\n", m_dataSize);
    code += Format("    program.m_maxRegisters = %u;\r\n", m_maxRegisters);
    if (species == 0xFFFFFFFF)
        code += "} // LoadProgram\r\n";
    else
        code += Format("} // LoadProgram%d\r\n", species);
    code += "\r\n";
} // SaveProgram

float FireStarterProgram::EmulateProgram(FireStarterData& data, float n)
{
    for (unsigned int i = 0; i < m_programInstructions; i++) {
        float& f = data.d[m_instructions.Register(i)];

        switch (m_instructions.Opcode(i)) {
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

FireStarterProgram::FireStarterProgram(FireStarterProgramMode programMode, unsigned int programInstructions)
{
    m_programMode = programMode;
    m_programInstructions = programInstructions;
    m_dataSize = m_programInstructions;
    m_maxRegisters = m_programInstructions;
    for (unsigned int i = 0; i < m_programInstructions; i++)
        m_instructions.SetOperation(i);
    m_opcodes.resize(PROGRAM_OPCODES);
    for (unsigned int i = 0; i < PROGRAM_OPCODES; i++)
        m_opcodes[i] = fireStarterOpcodes[i];
} // FireStarterProgram