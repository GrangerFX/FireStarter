#pragma once
#include "CUDADefines.h"
#include "CheckErrors.h"
#include "GLBuffer.h"
#include "glad/glad.h"
#include <stdint.h>
#include <string>

/// OpenGL pixel formats
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
public:
	static size_t PixelSize(GLDisplayPixelFormat format);
	void ScreenResolution(int32_t screen_res_x, int32_t screen_res_y);
	void Display(GLBuffer &buffer, GLDisplayPixelFormat format = GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR4) const;
	GLDisplay(void);

private:
	GLuint m_render_tex = 0u;
	GLuint m_program = 0u;
	GLint m_render_tex_uniform_loc = -1;
	GLuint m_quad_vertex_buffer = 0;

	int32_t m_screen_res_x;
	int32_t m_screen_res_y;

	static const std::string s_vert_source;
	static const std::string s_frag_source;
}; // class GLDisplay
