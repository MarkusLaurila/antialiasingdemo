#include "header/Display.h"
#include <iostream>
using namespace std;

DISPLAY::DISPLAY(): window(nullptr) {
    glfwInit();
}
DISPLAY::~DISPLAY() {

}
void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    std::cout<<"Key pressed: "<<key<<std::endl;
}

void DISPLAY::createWindow(int height,int width) {
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW3" << std::endl;
        exit(EXIT_FAILURE);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE,GL_FALSE);
    this->window=glfwCreateWindow(800,600,"OpenGL Demo", nullptr,nullptr);
    glfwSetErrorCallback(error_callback);
    if (this->window == nullptr)
    {
        std::cout << "Failed to open window. Fatal Error" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    //Hide cursor
    glfwSetInputMode(window,GLFW_CURSOR,GLFW_CURSOR_DISABLED);
    glfwMakeContextCurrent(window);
    //1 cycle refresh
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);

}
GLFWwindow* DISPLAY::getWindow() {
    return this->window;
}