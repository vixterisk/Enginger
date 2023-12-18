#version 330 core
layout (location = 0) in vec3 aPosition;
layout (location = 1) in vec4 aColor;

out vec4 outColor;

void main()
{
   outColor = aColor;
   gl_Position = vec4(aPosition.x, aPosition.y, aPosition.z, 1.0);
}