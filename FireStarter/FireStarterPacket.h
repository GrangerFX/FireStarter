#pragma once
#include <vector>
#include <string>

class FireStarterPacket : public std::vector<char>
{
private:
    size_t m_getPos = 0;
    bool m_getMode = false;
    bool m_getResult = false;
    std::string m_command;
public:
    inline void GetStart(void)
    {
        m_getPos = 0;
        m_getMode = true;
        m_getResult = true;
    } // GetStart

    inline bool GetResult(void)
    {
        return m_getResult;
    } // GetResult

    inline size_t GetSize(void)
    {
        if (!m_getMode || !m_getResult)
            return 0;
        if (m_getPos >= size())
            return 0;
        return size() - m_getPos;
    } // GetSize

    inline bool GetData(void* dataPtr, size_t dataSize)
    {
        if (dataSize) {
            if (dataSize > GetSize()) {
                m_getResult = false;
                return false;
            }
            memcpy(dataPtr, data() + m_getPos, dataSize);
            m_getPos += dataSize;
        }
        return true;
    } // GetData

    inline const std::string& Command(void) const
    {
        return m_command;
    } // Command

    inline const std::string& Command(void)
    {
        if (m_command.empty() && !m_getPos && !m_getMode) {
            GetStart();
            size_t nameLength = strnlen_s(data(), size() - 1);
            m_command.resize(nameLength);
            memcpy(m_command.data(), data(), nameLength);
            m_getPos = nameLength + 1;
        }
        return m_command;
    } // Command

    inline void AddData(const void* dataPtr, size_t dataSize)
    {
        if (dataSize) {
            size_t curSize = size();
            resize(curSize + dataSize);
            memcpy(data() + curSize, dataPtr, dataSize);
        }
    } // AddData

    inline bool Packetize(void* dataPtr, size_t dataSize)
    {
        if (!m_getMode) {
            AddData(dataPtr, dataSize);
            return true;
        }
        return GetData(dataPtr, dataSize);
    } // Packetize

    inline bool Packetize(std::vector<unsigned char>& data)
    {
        if (!m_getMode) {
            size_t size = data.size();
            AddData(&size, sizeof(size));
            AddData(data.data(), size);
            return true;
        }
        data.clear();
        size_t size = 0;
        if (!GetData(&size, sizeof(size)))
            return false;
        if (size) {
            data.resize(size);
            return GetData(data.data(), size);
        }
        return true;
    } // Packetize

    inline bool Packetize(bool& n)
    {
        return Packetize(&n, sizeof(n));
    } // Packetize

    inline bool Packetize(int& n)
    {
        return Packetize(&n, sizeof(n));
    } // Packetize

    inline bool Packetize(unsigned int& n)
    {
        return Packetize(&n, sizeof(n));
    } // Packetize

    inline bool Packetize(float& n)
    {
        return Packetize(&n, sizeof(n));
    } // Packetize

    inline bool Packetize(std::string& string)
    {
        if (!m_getMode) {
            size_t size = string.size();
            AddData(&size, sizeof(size));
            if (size)
                AddData(string.data(), size);
        } else {
            string.clear();
            size_t size = 0;
            if (!GetData(&size, sizeof(size)))
                return false;
            if (size) {
                string.resize(size);
                return GetData(string.data(), size);
            }
        }
        return true;
    } // Packetize

    inline bool Packetize(std::vector<std::string>& strings)
    {
        if (!m_getMode) {
            size_t size = strings.size();
            AddData(&size, sizeof(size));
            for (std::string& string : strings)
                Packetize(string);
            return true;
        }
        strings.clear();
        size_t size = 0;
        if (!GetData(&size, sizeof(size)))
            return false;
        if (size) {
            strings.resize(size);
            for (std::string& string : strings)
                if (!Packetize(string))
                    return false;
        }
        return true;
    } // Packetize

    inline FireStarterPacket(const std::string &command = std::string())
    {
        m_command = command;
        if (!m_command.empty())
            AddData(m_command.c_str(), m_command.length() + 1);
    } // FireStarterPacket
}; // FireStarterPacket
