cmake_minimum_required(VERSION 3.10)
project(antialiasing)
find_package(OpenGL REQUIRED)
set( GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE )
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory("include/glfw-3.4")
add_subdirectory("include/glew-2.1.0/build/cmake")
add_subdirectory("include/glm")
add_subdirectory("include/soil-master")
include_directories("include/glm")
include_directories("include/glfw-3.4/include")
include_directories("include/glfw-3.4/deps/glad")
include_directories("include/glew-2.1.0/include/GL")
include_directories("include/soil-master")
file(GLOB_RECURSE GLFW_INCLUDE ".glfw-3.4/include/*.h")
file(GLOB_RECURSE GLFW_DEPS ".glfw-3.4/deps/*.h")
file(GLOB_RECURSE GLM_MATH ".include/glm/*.hpp")
file(GLOB_RECURSE SOIL_IMAGE ".include/soil-master/inc/*.h")
file(GLOB_RECURSE GLEW_INCLUDE ".include/glew-2.1.0/include/GL/*.h")
add_executable(antialiasing main.cpp  ${GLFW_FILES} ${GLFW_DEPS} ${GLM_MATH} ${SOIL_IMAGE} ${GLEW_INCLUDE}
        header/Display.h
        header/Shader.h
        Shader.cpp
        Display.cpp)
add_custom_command(TARGET antialiasing POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:glew>
        $<TARGET_FILE:glfw>
        $<TARGET_FILE:soil>
        $<TARGET_FILE_DIR:antialiasing>)
target_link_libraries(antialiasing PUBLIC glfw PUBLIC glm PUBLIC soil PUBLIC glew)
