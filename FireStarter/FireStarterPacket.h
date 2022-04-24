#pragma once
#include <vector>

class FireStarterPacket : public std::vector<unsigned char>
{
private:
    size_t m_getPos = 0;
    bool m_getMode = false;
    bool m_getResult = false;
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
}; // FireStarterPacket
