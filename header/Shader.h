//
// Created by maker on 28.5.2025.
//
#pragma once

#include <glew.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
class SHADER {
    public:
    GLuint program;
    SHADER(const char* vertexPath, const char* fragmentPath);
    void UseShader();
};

