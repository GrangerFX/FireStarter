#pragma once
#include "SerialThread.h"
#include "CUDAErrors.h"

class FireStarterWindow {
private:
    inline void swap(const FireStarterWindow& other)
    {
        m_reference = other.m_reference ? other.m_reference : &other;
        m_window = other.m_window;
        Clear(); // Deallocate the buffers
        if (m_reference)
            Resize();
        else
            Resize(other.m_width, other.m_height); // Allocate new buffers.
    } // swap

public:
    const FireStarterWindow* m_reference = nullptr; // Reference window for resolution changes.
    void* m_window = nullptr;                       // Handle to the app's main window (HWND)
    unsigned char* m_hostBase = nullptr;            // Pointer to the alligned native pixel format buffer in host memory
    unsigned char* m_deviceBase = nullptr;          // Pointer to the alligned native pixel format buffer in device memory
    unsigned long m_width = 0;                      // Number of columns
    unsigned long m_height = 0;                     // Number of rows
    size_t m_size = 0;                              // The total size of the buffer in bytes

    inline FireStarterWindow& operator = (const FireStarterWindow& other)
    {
        swap(other);
        return *this;
    } // operator =

    inline void Allocate(CUstream stream = nullptr)
    {
        if (m_size) {
            if (stream && !m_deviceBase)
                checkCUDAErrors(cudaMalloc(&m_deviceBase, m_size));
            if (!m_hostBase)
                checkCUDAErrors(cudaMallocHost(&m_hostBase, m_size));
        }
    } // Allocate

    inline void Erase(CUstream stream = nullptr)
    {
        if (m_size) {
            Allocate(stream);
            if (stream)
                cudaMemsetAsync(m_deviceBase, 0, m_size, stream);
            else
                cudaMemset(m_hostBase, 0, m_size);
        }
    } // Erase

    inline const unsigned char* GetPixels(CUstream stream = nullptr)
    {
        if (m_size) {
            Allocate(stream);
            if (stream) {
                checkCUDAErrors(cudaMemcpyAsync(m_hostBase, m_deviceBase, m_size, cudaMemcpyDeviceToHost, stream));
                checkCUDAErrors(cudaStreamSynchronize(stream));
            }
        }
        return m_hostBase;
    } // GetPixels

    inline void Clear(void)
    {
        if (m_hostBase) {
            checkCUDAErrors(cudaFreeHost(m_hostBase));
            m_hostBase = nullptr;
        }
        if (m_deviceBase) {
            checkCUDAErrors(cudaFree(m_deviceBase));
            m_deviceBase = nullptr;
        }
        m_width = 0;
        m_height = 0;
    } // Clear

    inline void Resize(unsigned long width, unsigned long height)
    {
        if ((m_width != width) || (m_height != height)) {
            Clear();
            m_width = width;
            m_height = height;
            m_size = m_width * m_height * sizeof(uchar4);
        }
    } // Resize

    inline void Resize(void)
    {
        unsigned long width = 0;
        unsigned long height = 0;
        if (m_reference) {
            width = m_reference->m_width;
            height = m_reference->m_height;
        }
        Resize(width, height);
    } // Resize

    inline void DisplayImage(CUstream stream = nullptr)
    {
        const unsigned char* pixels = GetPixels(stream);
        if (pixels)
            SerialThread::DispatchMainAsync([this, pixels] {
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
    } // DisplayImage

    inline void DisplayText(const std::string& string)
    {
        SerialThread::DispatchMainAsync([this, string] {
            SetWindowText((HWND)m_window, string.c_str());
        });
    } // DisplayText

    inline FireStarterWindow(const FireStarterWindow& other)
    {
        swap(other);
    } // FireStarterWindow

    inline FireStarterWindow(void* window, unsigned long width, unsigned long height) : m_window(window)
    {
        Resize(width, height);
    } // FireStarterWindow

    inline ~FireStarterWindow(void)
    {
        Resize(0, 0);
    } // ~FireStarterWindow
}; // class FireStarterWindow
