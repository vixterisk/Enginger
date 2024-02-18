#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

void initGLFW();

GLFWwindow* createWindow(const char* windowName, bool isFullscreen, bool isBorderless, int width, int height);

template<class T, class F>
T checkNotNull(T value, F errorHandler = {}, std::string errorMessage = "");

template<class T, class F>
T* checkNotNull(T* value, F errorHandler = {}, std::string errorMessage = "");

#include "check-not-null.tpp"