#pragma once
#include "CUDAThread.h"
#include "CUDAErrors.h"

class FireStarterWindow : public CUDAThread {
private:
    void* m_window = nullptr;                       // Handle to the app's main window (HWND)
    unsigned char* m_hostBase = nullptr;            // Pointer to the alligned native pixel format buffer in host memory
    CUdeviceptr m_deviceBase = 0;                   // Pointer to the alligned native pixel format buffer in device memory
    unsigned long m_width = 0;                      // Number of columns
    unsigned long m_height = 0;                     // Number of rows
    size_t m_size = 0;                              // The total size of the buffer in bytes
    bool m_CUDABuffer = false;                      // True if the buffer is allocated in CUDA device memory in addition to host memory.

    inline void ClearBuffers(void)
    {
        if (m_hostBase) {
            checkCUDAErrors(cuMemFreeHost(m_hostBase));
            m_hostBase = nullptr;
        }
        if (m_deviceBase) {
            checkCUDAErrors(cuMemFree((CUdeviceptr)m_deviceBase));
            m_deviceBase = 0;
        }
    } // ClearBuffers

    inline void AllocateBuffers(void)
    {
        ClearBuffers();
        if (m_size) {
            if (m_CUDABuffer && !m_deviceBase)
                checkCUDAErrors(cuMemAllocAsync(&m_deviceBase, m_size, Stream()));
            if (!m_hostBase)
                checkCUDAErrors(cuMemHostAlloc((void**)&m_hostBase, m_size, 0));
            Erase();
        }
    } // AllocateBuffers

    inline void EraseBuffers(void)
    {
        if (m_size) {
            if (m_deviceBase)
                checkCUDAErrors(cuMemsetD8Async(m_deviceBase, 0, m_size, Stream()));
            memset(m_hostBase, 0, m_size);
        }
    } // EraseBuffers
public:

    inline void Erase(void)
    {
        DispatchAsync([this] {
            EraseBuffers();
        });
    } // Erase

    inline const unsigned char* GetHostPixels(unsigned int& width, unsigned int& height)
    {
        width = m_width;
        height = m_height;
        if (m_size && m_CUDABuffer)
            checkCUDAErrors(cuMemcpyDtoH(m_hostBase, m_deviceBase, m_size));
        return m_hostBase;
    } // GetHostPixels

    inline const CUdeviceptr GetDevicePixels(unsigned int& width, unsigned int& height)
    {
        width = m_width;
        height = m_height;
        return m_deviceBase;
    } // GetDevicePixels

    inline void Clear(void)
    {
        DispatchSync([this] {
            ClearBuffers();
        });
    } // Clear

    inline void Resize(unsigned long width, unsigned long height)
    {
        DispatchAsync([this, width, height] {
            if ((m_width != width) || (m_height != height)) {
                m_width = width;
                m_height = height;
                m_size = m_width * m_height * sizeof(uchar4);
                AllocateBuffers();
            }
        });
    } // Resize

    inline void DisplayImage(void)
    {
        DispatchAsync([this] {
            if (m_size && m_CUDABuffer)
                checkCUDAErrors(cuMemcpyDtoH(m_hostBase, m_deviceBase, m_size));
            const unsigned char* pixels = (const unsigned char*)m_hostBase;
            if (pixels)
                SerialThread::DispatchMainSync([this, pixels] {
                    if (m_window && m_width && m_height) {
                        unsigned char buffer[4096];
                        BITMAPINFO* bm = (BITMAPINFO*)buffer;
                        bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
                        bm->bmiHeader.biHeight = -(int)m_height;
                        bm->bmiHeader.biPlanes = 1;
                        bm->bmiHeader.biCompression = BI_RGB;
                        bm->bmiHeader.biSizeImage = 0;
                        bm->bmiHeader.biXPelsPerMeter = 0;
                        bm->bmiHeader.biYPelsPerMeter = 0;
                        bm->bmiHeader.biClrUsed = 0;
                        bm->bmiHeader.biClrImportant = 0;
                        bm->bmiHeader.biWidth = m_width;
                        bm->bmiHeader.biBitCount = 32;

                        HDC hdc = GetDC((HWND)m_window);
                        if (hdc) {
                            SetDIBitsToDevice(hdc, 0, 0, m_width, m_height, 0, 0, 0, m_height, pixels, bm, DIB_RGB_COLORS);
                            GdiFlush();
                        }
                    }
                });
        });
    } // DisplayImage

    inline void DisplayText(const std::string& string, bool sync = false)
    {
        SerialThread::DispatchMain([this, string] {
            SetWindowText((HWND)m_window, string.c_str());
        }, sync);
    } // DisplayText

    inline FireStarterWindow(void* window, unsigned long width = 0, unsigned long height = 0, int device = -1) : CUDAThread("FireStarterWindow", MAX(device, 0)), m_window(window)
    {
        m_CUDABuffer = device >= 0;
        Resize(width, height);
    } // FireStarterWindow

    inline ~FireStarterWindow(void)
    {
        Clear();
    } // ~FireStarterWindow
}; // class FireStarterWindow
