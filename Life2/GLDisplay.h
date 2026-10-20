#pragma once
// Compatibility adapter for existing FireStarter callers. New applications can
// include PixelDisplay.h directly, without these application-specific headers.
#include "PixelDisplay.h"
#include "CUDADefines.h"
#include "GLBuffer.h"

typedef enum GLDisplayPixelFormat
{
	GLDISPLAY_PIXEL_FORMAT_NONE = 0,		///< three halfs, RGB
	GLDISPLAY_PIXEL_FORMAT_HALF = 1,		///< half, R
	GLDISPLAY_PIXEL_FORMAT_FLOAT = 2,		///< float, R
	GLDISPLAY_PIXEL_FORMAT_UCHAR = 3,		///< unsigned char, R
	GLDISPLAY_PIXEL_FORMAT_HALF3 = 0x2201,  ///< three halfs, RGB
	GLDISPLAY_PIXEL_FORMAT_HALF4 = 0x2202,  ///< four halfs, RGBA
	GLDISPLAY_PIXEL_FORMAT_FLOAT3 = 0x2203,	///< three floats, RGB
	GLDISPLAY_PIXEL_FORMAT_FLOAT4 = 0x2204,	///< four floats, RGBA
	GLDISPLAY_PIXEL_FORMAT_UCHAR3 = 0x2205,	///< three unsigned chars, RGB
	GLDISPLAY_PIXEL_FORMAT_UCHAR4 = 0x2206	///< four unsigned chars, RGBA
} GLDisplayPixelFormat;

class GLDisplay {
    mutable pixel_display::Presenter m_presenter;
    int m_width = 0, m_height = 0;
    static pixel_display::Format Format(GLDisplayPixelFormat format) {
        using F = pixel_display::Format;
        switch (format) {
        case GLDISPLAY_PIXEL_FORMAT_UCHAR: return F::R8;
        case GLDISPLAY_PIXEL_FORMAT_UCHAR3: return F::RGB8;
        case GLDISPLAY_PIXEL_FORMAT_UCHAR4: return F::RGBA8;
        case GLDISPLAY_PIXEL_FORMAT_HALF: return F::R16F;
        case GLDISPLAY_PIXEL_FORMAT_HALF3: return F::RGB16F;
        case GLDISPLAY_PIXEL_FORMAT_HALF4: return F::RGBA16F;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT: return F::R32F;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT3: return F::RGB32F;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT4: return F::RGBA32F;
        default: throw std::invalid_argument("Unknown display format");
        }
    }
public:
    static size_t PixelSize(GLDisplayPixelFormat format) {
        switch (format) {
        case GLDISPLAY_PIXEL_FORMAT_NONE: return 0;
        case GLDISPLAY_PIXEL_FORMAT_UCHAR: return 1;
        case GLDISPLAY_PIXEL_FORMAT_UCHAR3: return 3;
        case GLDISPLAY_PIXEL_FORMAT_UCHAR4: return 4;
        case GLDISPLAY_PIXEL_FORMAT_HALF: return 2;
        case GLDISPLAY_PIXEL_FORMAT_HALF3: return 6;
        case GLDISPLAY_PIXEL_FORMAT_HALF4: return 8;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT: return 4;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT3: return 12;
        case GLDISPLAY_PIXEL_FORMAT_FLOAT4: return 16;
        default: throw std::invalid_argument("Unknown display format");
        }
    }
    void ScreenResolution(int width, int height) { m_width = width; m_height = height; }
    void Display(const pixel_display::Buffer& buffer) const {
        m_presenter.Present(buffer, m_width, m_height);
    }
    void Display(GLBuffer& buffer, GLDisplayPixelFormat format = GLDISPLAY_PIXEL_FORMAT_UCHAR4) const {
        if (format == GLDISPLAY_PIXEL_FORMAT_NONE || m_width <= 0 || m_height <= 0) return;
        if (PixelSize(format) != buffer.PixelSize())
            throw std::invalid_argument("Display format does not match buffer pixel size");
        m_presenter.PresentBuffer(buffer.PBO(), buffer.Width(), buffer.Height(),
                                  m_width, m_height, Format(format));
    }
    void Release() { m_presenter.Release(); }
};
