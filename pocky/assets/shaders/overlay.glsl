
precision mediump float;
uniform sampler2D tex;
uniform mat4 modelviewMatrix;
uniform mat4 projMatrix;
uniform float height;
#ifdef _VERTEX_
attribute vec3 in_Position;
attribute vec3 in_TexCoord;
varying vec3 pass_TexCoord;
void main(void) {
	pass_TexCoord = in_TexCoord;
    gl_Position = projMatrix * modelviewMatrix * vec4(in_Position,1.0);
}
#endif

#ifdef _FRAGMENT_
varying vec3 pass_TexCoord;
void main() {
	if(pass_TexCoord.t <= height)
    	gl_FragColor = vec4(1.0, 0.0, 1.0, 0.9);
    else
    	gl_FragColor = vec4(0.0, 0.0, 0.0, 0.9);
}
#endif