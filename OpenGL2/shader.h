
#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>

class Shader
{
    public:

        static const unsigned int NUM_SHADERS = 2;
        Shader(const std::string& fileName);
        void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);

        std::string LoadShader(const std::string& fileName);

        GLuint CreateShader(const std::string& text,GLenum shaderType);


        void Bind();
        virtual ~Shader();

    protected:

    private:
        static const unsigned int NUM_SHADER = 2;
        Shader(const Shader& other){}
        Shader& operator=(const Shader& other){}


        GLuint m_program;
        GLuint m_shaders[NUM_SHADERS];
};

#endif // SHADER_H
