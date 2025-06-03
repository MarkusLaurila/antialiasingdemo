#version 330 core

in vec2 TexCoord;
out vec4 color;

uniform sampler2D texture0;
uniform sampler2D texture1;

void main()
{
    vec4 tex1 = texture(texture0,TexCoord);
    vec4 tex2 = texture(texture1,TexCoord);
   color = mix(tex1, tex2, 0.2);
   // color = vec4(1.0,0.0,0.0,1.0);//solid red
}