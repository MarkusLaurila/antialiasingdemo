#define GLAD_GL_IMPLEMENTATION
#include <gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <iostream>


    void error_callback(int error, const char* description)
    {
        fprintf(stderr, "Error: %s\n", description);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        std::cout<<"Key pressed: "<<key<<std::endl;
    }
    int main() {

        if (!glfwInit()) {
            std::cout << "Failed to initialize GLFW3" << std::endl;
            exit(EXIT_FAILURE);
        }
        glfwSetErrorCallback(error_callback);

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        GLFWwindow* window =glfwCreateWindow(640, 480, "Hello World!", nullptr, nullptr);
        if (!window)
        {
            std::cout << "Failed to open window" << std::endl;
            glfwTerminate();
            exit(EXIT_FAILURE);
        }
        glfwMakeContextCurrent(window);
        gladLoadGL(glfwGetProcAddress);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);


        while (!glfwWindowShouldClose(window)) {

            double lastFrame = glfwGetTime();
            glfwPollEvents();
            glfwSwapBuffers(window);


        }




        glfwTerminate();


        return 0;
    }
