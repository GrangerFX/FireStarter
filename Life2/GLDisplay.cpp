#include "GLDisplay.h"
#include "CheckErrors.h"
#include <iostream>

//-----------------------------------------------------------------------------
//
// Helper functions
//
//-----------------------------------------------------------------------------
GLuint createGLShader(const std::string& source, GLuint shader_type)
{
	GLuint shader = glCreateShader(shader_type);
	{
		const GLchar* source_data = reinterpret_cast<const GLchar*>(source.data());
		glShaderSource(shader, 1, &source_data, nullptr);
		glCompileShader(shader);

		GLint is_compiled = 0;
		glGetShaderiv(shader, GL_COMPILE_STATUS, &is_compiled);
		if (is_compiled == GL_FALSE) {
			GLint max_length = 0;
			glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &max_length);

			std::string info_log(max_length, '\0');
			GLchar* info_log_data = reinterpret_cast<GLchar*>(&info_log[0]);
			glGetShaderInfoLog(shader, max_length, nullptr, info_log_data);

			glDeleteShader(shader);
			printf("Compilation of shader failed: " + info_log + "\n");

			return 0;
		}
	}

	GL_CHECK_ERRORS();

	return shader;
} // createGLShader

GLuint createGLProgram(const std::string& vert_source, const std::string& frag_source)
{
	GLuint vert_shader = createGLShader(vert_source, GL_VERTEX_SHADER);
	if (vert_shader == 0)
		return 0;

	GLuint frag_shader = createGLShader(frag_source, GL_FRAGMENT_SHADER);
	if (vert_shader == 0) {
		glDeleteShader(vert_shader);
		return 0;
	}

	GLuint program = glCreateProgram();
	glAttachShader(program, vert_shader);
	glAttachShader(program, frag_shader);
	glLinkProgram(program);

	GLint is_linked = 0;
	glGetProgramiv(program, GL_LINK_STATUS, &is_linked);
	if (is_linked == GL_FALSE) {
		GLint max_length = 0;
		glGetProgramiv(program, GL_INFO_LOG_LENGTH, &max_length);

		std::string info_log(max_length, '\0');
		GLchar* info_log_data = reinterpret_cast<GLchar*>(&info_log[0]);
		glGetProgramInfoLog(program, max_length, nullptr, info_log_data);
		std::cerr << "Linking of program failed: " << info_log << std::endl;

		glDeleteProgram(program);
		glDeleteShader(vert_shader);
		glDeleteShader(frag_shader);

		return 0;
	}

	glDetachShader(program, vert_shader);
	glDetachShader(program, frag_shader);

	GL_CHECK_ERRORS();

	return program;
} // createGLProgram

GLint getGLUniformLocation(GLuint program, const std::string& name)
{
	GLint loc = glGetUniformLocation(program, name.c_str());
	DEBUG_ASSERT_INFO(loc != -1, "Failed to get uniform loc for '" + name + "'");
	return loc;
} // getGLUniformLocation

//-----------------------------------------------------------------------------
//
// GLDisplay implementation
//
//-----------------------------------------------------------------------------

const std::string GLDisplay::s_vert_source =
R"(
	#version 330 core

	layout(location = 0) in vec3 vertexPosition_modelspace;
	out vec2 UV;

	void main()
	{
	gl_Position =  vec4(vertexPosition_modelspace,1);
	UV = (vec2( vertexPosition_modelspace.x, vertexPosition_modelspace.y )+vec2(1,1))/2.0;
	}
)";

const std::string GLDisplay::s_frag_source =
R"(
	#version 330 core

	in vec2 UV;
	out vec3 color;

	uniform sampler2D render_tex;
	uniform bool correct_gamma;

	void main()
	{
	color = texture( render_tex, UV ).xyz;
	}
)";

GLDisplay::GLDisplay(void)
{
	m_screen_res_x = m_screen_res_y = 0;

	GLuint m_vertex_array;
	GL_CHECK(glGenVertexArrays(1, &m_vertex_array));
	GL_CHECK(glBindVertexArray(m_vertex_array));

	m_program = createGLProgram(s_vert_source, s_frag_source);
	m_render_tex_uniform_loc = getGLUniformLocation(m_program, "render_tex");

	GL_CHECK(glGenTextures(1, &m_render_tex));
	GL_CHECK(glBindTexture(GL_TEXTURE_2D, m_render_tex));

	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST));
	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));
	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE));
	GL_CHECK(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE));

	static const GLfloat g_quad_vertex_buffer_data[] = {
		-1.0f, -1.0f, 0.0f,
		1.0f, -1.0f, 0.0f,
		-1.0f,  1.0f, 0.0f,

		-1.0f,  1.0f, 0.0f,
		1.0f, -1.0f, 0.0f,
		1.0f,  1.0f, 0.0f,
	};

	GL_CHECK(glGenBuffers(1, &m_quad_vertex_buffer));
	GL_CHECK(glBindBuffer(GL_ARRAY_BUFFER, m_quad_vertex_buffer));
	GL_CHECK(glBufferData(GL_ARRAY_BUFFER,
		sizeof(g_quad_vertex_buffer_data),
		g_quad_vertex_buffer_data,
		GL_STATIC_DRAW
	)
	);

	GL_CHECK_ERRORS();
} // GLDisplay

size_t GLDisplay::PixelSize(GLDisplayPixelFormat format)
{
	switch (format) {
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_NONE:
		return 0;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF:
		return sizeof(half);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT:
		return sizeof(float);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR:
		return sizeof(unsigned char);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF3:
		return sizeof(half3);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF4:
		return sizeof(half4);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT3:
		return sizeof(float3);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT4:
		return sizeof(float4);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR3:
		return sizeof(uchar3);
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR4:
		return sizeof(uchar4);
	default:
		DEBUG_ASSERT_INFO(false, "OptiXGLDisplay::pixelFormatSize: Unrecognized buffer format");
		return 0;
	}
} // PixelSize

void GLDisplay::ScreenResolution(int32_t screen_res_x, int32_t screen_res_y)
{
	m_screen_res_x = screen_res_x;
	m_screen_res_y = screen_res_y;
} // ScreenResolution

void GLDisplay::Display(GLBuffer &buffer, GLDisplayPixelFormat format) const
{
	size_t elmt_size = PixelSize(format);
	if (!elmt_size)
		return;

	GLuint pbo = buffer.PBO();
	unsigned int framebuf_res_x = buffer.Width();
	unsigned int framebuf_res_y = buffer.Height();
		
	GL_CHECK(glBindFramebuffer(GL_FRAMEBUFFER, 0));
	if (m_screen_res_x && m_screen_res_y) {
		GL_CHECK(glViewport(0, 0, m_screen_res_x, m_screen_res_y));
	} else {
		GL_CHECK(glViewport(0, 0, framebuf_res_x, framebuf_res_y));
	}

	GL_CHECK(glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT));

	GL_CHECK(glUseProgram(m_program));

	// Bind our texture in Texture Unit 0
	GL_CHECK(glActiveTexture(GL_TEXTURE0));
	GL_CHECK(glBindTexture(GL_TEXTURE_2D, m_render_tex));
	GL_CHECK(glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo));

	if (elmt_size % 8 == 0)
		glPixelStorei(GL_UNPACK_ALIGNMENT, 8);
	else if (elmt_size % 4 == 0)
		glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
	else if (elmt_size % 2 == 0)
		glPixelStorei(GL_UNPACK_ALIGNMENT, 2);
	else
		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	switch (format) {
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_R16F, framebuf_res_x, framebuf_res_y, 0, GL_R, GL_HALF_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_R32F, framebuf_res_x, framebuf_res_y, 0, GL_R, GL_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_R8, framebuf_res_x, framebuf_res_y, 0, GL_R, GL_UNSIGNED_BYTE, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF3:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB16F, framebuf_res_x, framebuf_res_y, 0, GL_RGB, GL_HALF_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_HALF4:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, framebuf_res_x, framebuf_res_y, 0, GL_RGBA, GL_HALF_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT3:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB32F, framebuf_res_x, framebuf_res_y, 0, GL_RGB, GL_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_FLOAT4:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA32F, framebuf_res_x, framebuf_res_y, 0, GL_RGBA, GL_FLOAT, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR3:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, framebuf_res_x, framebuf_res_y, 0, GL_RGB, GL_UNSIGNED_BYTE, nullptr);
		break;
	case GLDisplayPixelFormat::GLDISPLAY_PIXEL_FORMAT_UCHAR4:
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, framebuf_res_x, framebuf_res_y, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
		break;
	default:
		DEBUG_ASSERT_INFO(false, "Unknown buffer format");
		return;
	}

	GL_CHECK(glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0));
	GL_CHECK(glUniform1i(m_render_tex_uniform_loc, 0));

	// 1st attribute buffer : vertices
	GL_CHECK(glEnableVertexAttribArray(0));
	GL_CHECK(glBindBuffer(GL_ARRAY_BUFFER, m_quad_vertex_buffer));
	GL_CHECK(glVertexAttribPointer(
		0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
		3,                  // size
		GL_FLOAT,           // type
		GL_FALSE,           // normalized?
		0,                  // stride
		(void*)0            // array buffer offset
	));

	// Draw the triangles !
	GL_CHECK(glDrawArrays(GL_TRIANGLES, 0, 6)); // 2 * 3 indices starting at 0 -> 2 triangles

	GL_CHECK(glDisableVertexAttribArray(0));

	GL_CHECK_ERRORS();
} // display
