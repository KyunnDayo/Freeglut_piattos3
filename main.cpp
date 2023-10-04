#include <iostream>
#include <glut.h>
using namespace std;



void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	//glColor3ub(233,233,107);
	
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0,0);
	glColor3ub(233,233,107);
	glVertex2f(-.5,0); //p1
	glColor3ub(107,107,233);
	glVertex2f(-0.3,-0.4); //p2
	glColor3ub(233,233,107);	
	glVertex2f(0.3,-0.4); //p3
	glColor3ub(107,107,233);
	glVertex2f(0.5,0); //p4
	glColor3ub(233,233,107);	
	glVertex2f(0.3,0.4); //p5
	glColor3ub(107,107,233);
	glVertex2f(-0.3,0.4); //p6
	glColor3ub(233,233,107);	
	glVertex2f(-.5,0); //p1

	glEnd();
	glFlush();
}

int main(int argc, char** argv){
	string author = "JRomero";
	glutInit(&argc, argv);
	glutCreateWindow("piattos");
	glutDisplayFunc(display);
	glutMainLoop();
}


/*	code prototype, do not remove
	glBegin(GL_LINES);
	glVertex2f(-0.5,-0.5);
	glVertex2f(-0.5,0.5);
	glVertex2f(0.5,0.5);
	glVertex2f(0.5,-0.5);
	
	glVertex2f(-.5,0); //p1
	glVertex2f(-0.3,-0.4); //p2
	glVertex2f(0.3,-0.4); //p3
	glVertex2f(0.5,0); //p4
	glVertex2f(0.3,0.4); //p5
	glVertex2f(-0.3,0.4); //p6
	
	glBegin(GL_TRIANGLES);
	glColor3ub(233,233,107);
	glVertex2f(-.5,0);
	glVertex2f(-0.3,-0.4);
	glVertex2f(0.3,-0.4);
	
	glVertex2f(-0.3,-0.4);
	glVertex2f(0.3,-0.4);
	glVertex2f(0.5,0);
	
	glVertex2f(0.3,-0.4);
	glVertex2f(0.5,0);
	glVertex2f(0.3,0.4);
	
	glVertex2f(0.5,0);
	glVertex2f(0.3,0.4);
	glVertex2f(-0.3,0.4);
	
	glVertex2f(0.3,0.4);
	glVertex2f(-0.3,0.4);
	glVertex2f(-.5,0);
	
	glVertex2f(-0.3,0.4);
	glVertex2f(-.5,0);
	glVertex2f(-0.3,-0.4);
	
	*/
