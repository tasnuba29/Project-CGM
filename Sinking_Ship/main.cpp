#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<time.h>

void ice();
void display1();
void display2();
void display3();
void ship();
void water();


GLint a=0,b=0,c=0,x=0, i=0;




void update(int value)
{



   a+=20.0;
   glutPostRedisplay();
   glutTimerFunc(100,update,0);


}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	display1();

	if(a>500)

	{
		b+=10;
		display2();
	}



	if(b>250)
	{

		c+=10;
		display3();

	}

	glFlush();
	glutSwapBuffers();
}


void display1()
{
	glPushMatrix();
	glTranslated(a,75,0.0);
	ship();
	glPopMatrix();
	water();
}

void display2()
{

	glClear(GL_COLOR_BUFFER_BIT);
	ice();
	glPushMatrix();
	glTranslated(b,75,0.0);
	ship();
	glPopMatrix();
	water();

}

void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	x-=1;
	ice();
	glPushMatrix();
	glTranslated(c,100+x*5,0.0);
	glRotated(-15,0,0,1);
	ship();
	glPopMatrix();
	water();


}

void water()
{

		glTranslated(i,0,0.0);
		glColor3f(0.1,0.5,1.0);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(10,96);
		glVertex2f(25,98);
		glVertex2f(39,94);
		glVertex2f(50,92);
		glVertex2f(70,98);
		glVertex2f(85,95);
		glVertex2f(95,96);
		glVertex2f(110,99);
		glVertex2f(128,97);
		glVertex2f(139,95);
		glVertex2f(145,97);
		glVertex2f(155,99);
		glVertex2f(172,95);
		glVertex2f(195,96);
		glVertex2f(212,95);
		glVertex2f(254,92);
		glVertex2f(284,96);
		glVertex2f(344,98);
		glVertex2f(360,93);
		glVertex2f(390,94);
		glVertex2f(410,99);
		glVertex2f(450,94);
		glVertex2f(485,100);
		glVertex2f(502,92);
		glVertex2f(552,92);
		glVertex2f(592,96);
		glVertex2f(630,105);
		glVertex2f(680,93);
		glVertex2f(720,97);
		glVertex2f(750,93);
		glVertex2f(800,95);
		glVertex2f(850,97);
		glVertex2f(880,108);
		glVertex2f(900,96);
		glVertex2f(920,93);
		glVertex2f(950,99);
		glVertex2f(980,92);
		glVertex2f(1000,99);
		glVertex2f(1000,0);
		glVertex2f(1600,10);
		glVertex2f(3000,280);
		glEnd();
		glPopMatrix();
}




void ship()
{


	glScaled(24,24,0);

	glColor3f(0.329412,0.329412,0.329412); //base
	glBegin(GL_POLYGON);
		glVertex2f(0.5,5.0);
		glVertex2f(3,1);
		glVertex2f(22,1);
		glVertex2f(24.0,5.0);
	glEnd();

	glColor3f(1.0,1.0,1.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(1.35,3.5);
		glVertex2f(1.6,3.2);
		glVertex2f(23.2,3.2);
		glVertex2f(23.35,3.5);
	glEnd();

	glColor3f(0.329412,0.329412,0.329412); //base
	glBegin(GL_POLYGON);
		glVertex2f(21.0,5.0);
		glVertex2f(21.0,6.0);
		glVertex2f(24.5,6.0);
		glVertex2f(24.0,5.0);
	glEnd();

	glColor3f(0.74902,0.847059,0.847059); //top-mid
	glBegin(GL_POLYGON);
		glVertex2f(2.0,5.0);
		glVertex2f(2.0,12.0);
		glVertex2f(15.0,12.0);
		glVertex2f(19.5,5.0);
	glEnd();

	glColor3f(0.137255,0.137255,0.556863); //ring
	glBegin(GL_POLYGON);
		glVertex2f(2.0,8.2);
		glVertex2f(2.0,8.8);
		glVertex2f(17.1,8.8);
		glVertex2f(17.5,8.2);
	glEnd();

	glColor3f(0.90,0.91,0.98); //window
	glBegin(GL_POLYGON);
		glVertex2f(3.0,6.0);
		glVertex2f(3.0,7.2);
		glVertex2f(4.0,7.2);
		glVertex2f(4.0,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(4.7,6.0);
		glVertex2f(4.7,7.2);
		glVertex2f(5.7,7.2);
		glVertex2f(5.7,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(8.1,6.0);
		glVertex2f(8.1,7.2);
		glVertex2f(9.1,7.2);
		glVertex2f(9.1,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(9.8,6.0);
		glVertex2f(9.8,7.2);
		glVertex2f(10.8,7.2);
		glVertex2f(10.8,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(6.4,6.0);
		glVertex2f(6.4,7.2);
		glVertex2f(7.4,7.2);
		glVertex2f(7.4,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(11.5,6.0);
		glVertex2f(11.5,7.2);
		glVertex2f(12.5,7.2);
		glVertex2f(12.5,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(13.3,6.0);
		glVertex2f(13.3,7.2);
		glVertex2f(14.3,7.2);
		glVertex2f(14.3,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(15.1,6.0);
		glVertex2f(15.1,7.2);
		glVertex2f(16.1,7.2);
		glVertex2f(16.1,6.0);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(16.9,6.0);
		glVertex2f(16.9,7.2);
		glVertex2f(17.9,7.2);
		glVertex2f(17.9,6.0);
	glEnd();




	glColor3f(0.90,0.91,0.98); //window
	glBegin(GL_POLYGON);
		glVertex2f(3.0,9.8);
		glVertex2f(3.0,11.0);
		glVertex2f(4.0,11.0);
		glVertex2f(4.0,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(4.7,9.8);
		glVertex2f(4.7,11.0);
		glVertex2f(5.7,11.0);
		glVertex2f(5.7,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(8.1,9.8);
		glVertex2f(8.1,11.0);
		glVertex2f(9.1,11.0);
		glVertex2f(9.1,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(9.8,9.8);
		glVertex2f(9.8,11.0);
		glVertex2f(10.8,11.0);
		glVertex2f(10.8,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(6.4,9.8);
		glVertex2f(6.4,11.0);
		glVertex2f(7.4,11.0);
		glVertex2f(7.4,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(11.5,9.8);
		glVertex2f(11.5,11.0);
		glVertex2f(12.5,11.0);
		glVertex2f(12.5,9.8);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(13.3,9.8);
		glVertex2f(13.3,11.0);
		glVertex2f(14.3,11.0);
		glVertex2f(14.3,9.8);
	glEnd();

	glColor3f(0.329412,0.329412,0.329412); //top-cover
	glBegin(GL_POLYGON);
		glVertex2f(1.5,12.0);
		glVertex2f(1.5,12.5);
		glVertex2f(16.0,12.5);
		glVertex2f(16.0,12.0);
	glEnd();

	glColor3f(0.0,0.0,0.0); //chim
	glBegin(GL_POLYGON);
		glVertex2f(2.5,12.5);
		glVertex2f(2.5,16.0);
		glVertex2f(5.0,16.0);
		glVertex2f(5.0,12.5);
	glEnd();

	glColor3f(1.0,0.25,0.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(2.5,12.5);
		glVertex2f(2.5,13.5);
		glVertex2f(5.0,13.5);
		glVertex2f(5.0,12.5);
	glEnd();

	glColor3f(1.0,0.25,0.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(2.5,14.5);
		glVertex2f(2.5,15.5);
		glVertex2f(5.0,15.5);
		glVertex2f(5.0,14.5);
	glEnd();

	glColor3f(0.0,0.0,0.0); //chim
	glBegin(GL_POLYGON);
		glVertex2f(6.0,12.5);
		glVertex2f(6.0,16.0);
		glVertex2f(8.5,16.0);
		glVertex2f(8.5,12.5);
	glEnd();

	glColor3f(1.0,0.25,0.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(6.0,14.5);
		glVertex2f(6.0,15.5);
		glVertex2f(8.5,15.5);
		glVertex2f(8.5,14.5);
	glEnd();

	glColor3f(1.0,0.25,0.0); //ring
	glBegin(GL_POLYGON);
		glVertex2f(6.0,12.5);
		glVertex2f(6.0,13.5);
		glVertex2f(8.5,13.5);
		glVertex2f(8.5,12.5);
	glEnd();
}

void ice()
{
	glPushMatrix();
	glTranslated(500,50,0.0);
	glScaled(20,10,0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);

		glVertex2f(12.5,19.5);
		glVertex2f(15,19.5);
		glVertex2f(12.5,19.5);
		glVertex2f(13.5,18.5);
		glVertex2f(16.5,20.5);
		glVertex2f(17.5,18.5);
		glVertex2f(18.5,3.5);
		glVertex2f(19,3);
		glVertex2f(19.5,2.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);
		glVertex2f(6,3);
		glVertex2f(8.25,3.5);
		glVertex2f(8.5,18.5);
		glVertex2f(12,15);
		glVertex2f(13,17);
		glVertex2f(12.5,19.5);
		glVertex2f(8.5,9.5);
		glVertex2f(12.5,2.5);
        glVertex2f(5.5,2.5);
    glEnd();
   	glPopMatrix();
}



void myinit()
{
	glClearColor(0.1f,0.1f,0.1f,0.1f);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,799.0);
}

int main(int argc, char* argv[])

{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1024.0,768.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sinking Ship");
	glutDisplayFunc(display);
	myinit();
	glutTimerFunc(100,update,0);
	glutMainLoop();
	return 0;
}
