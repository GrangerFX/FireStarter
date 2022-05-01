#pragma once
#include <vector>

class FireStarterPacket : public std::vector<char>
{
private:
    size_t m_getPos = 0;
    bool m_getMode = false;
    bool m_getResult = false;
    std::string m_name;
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
        if (dataSize > GetSize()) {
            m_getResult = false;
            return false;
        }
        memcpy(dataPtr, data() + m_getPos, dataSize);
        m_getPos += dataSize;
        return true;
    } // GetData

    inline const std::string& Name(void)
    {
        if (m_name.empty() && !m_getPos && !m_getMode) {
            GetStart();
            size_t nameLength = strnlen_s(data(), size() - 1);
            m_name.resize(nameLength);
            memcpy(m_name.data(), data(), nameLength);
            m_getPos = nameLength + 1;
        }
        return m_name;
    } // Name

    inline void AddData(const void* dataPtr, size_t dataSize)
    {
        size_t curSize = size();
        resize(curSize + dataSize);
        memcpy(data() + curSize, dataPtr, dataSize);
    } // AddData

    size_t PacketizeSize(size_t size)
    {
        if (!m_getMode) {
            AddData(&size, sizeof(size));
            return size;
        }
        if (!GetData(&size, sizeof(size)))
            return 0;
        return size;
    } // PacketizeSize

    inline bool Packetize(void* dataPtr, size_t dataSize)
    {
        if (!m_getMode) {
            AddData(dataPtr, dataSize);
            return true;
        }
        return GetData(dataPtr, dataSize);
    } // Packetize

    inline bool Packetize(std::string& string)
    {
        if (!m_getMode) {
            size_t size = string.length() + 1;
            AddData(&size, sizeof(size));
            AddData(string.c_str(), size);
            return true;
        }
        string.clear();
        size_t length = 0;
        if (!GetData(&length, sizeof(length)))
            return false;
        if (length) {
            string.resize(length);
            return GetData(string.data(), length);
        }
        return true;
    } // Packetize

    inline FireStarterPacket(const std::string &name = std::string())
    {
        m_name = name;
        if (!m_name.empty())
            AddData(m_name.c_str(), m_name.length() + 1);
    } // FireStarterPacket
}; // FireStarterPacket
