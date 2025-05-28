
#pragma once
#include <GLFW/glfw3.h>

class DISPLAY {
    public:
    DISPLAY();
    ~DISPLAY();
    void createWindow(int width, int height);
    GLFWwindow* getWindow();
    private:
    GLFWwindow* window;
};

