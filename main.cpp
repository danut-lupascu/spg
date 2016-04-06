/*#include <gl/glut.h>
void init()
	{
	GLfloat light_ambient[] = {1, 1, 1, 1};
	GLfloat light_diffuse[] = {1, 1, 1, 1};
	GLfloat light_specular[] = {1, 1, 1, 1};
	GLfloat mat_ambient[] = {0.2, 0.2, 0.2, 1};
	GLfloat mat_diffuse[] = {0.9, 0.9, 0.0, 1};
	GLfloat mat_specular[] = {1, 1, 1, 1};
	GLfloat mat_shininess = 50;
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);
	glClearColor(1,1,1,1);
	//glShadeModel();
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	}
void cub_cu_normale()
	{
	glEnable(GL_NORMALIZE);
	glBegin(GL_POLYGON); //fata
	glNormal3d(-1, -1, 1);
	glVertex3d(-1, -1, 1);
	glNormal3d(-1, 1, 1);
	glVertex3d(-1, 1, 1);
	glNormal3d(-1, 1, -1);
	glVertex3d(-1, 1, -1);
	glNormal3d(-1, -1, 1);
	glVertex3d(-1, -1, 1);
	glEnd();
	//spate
	glBegin(GL_POLYGON); 
	glNormal3d(1, -1, 1);
	glVertex3d(1, -1, 1);
	glNormal3d(1, 1, 1);
	glVertex3d(1, 1, 1);
	glNormal3d(1, 1, -1);
	glVertex3d(1, 1, -1);
	glNormal3d(1, -1, -1);
	glVertex3d(1, -1, -1);
	glEnd();
	//dreapta
	glBegin(GL_POLYGON); 
	glNormal3d(-1, -1, 1);
	glVertex3d(-1, -1, 1);
	glNormal3d(-1, 1, 1);
	glVertex3d(-1, 1, 1);
	glNormal3d(1, 1, 1);
	glVertex3d(1, 1, 1);
	glNormal3d(1, -1, 1);
	glVertex3d(1, -1, 1);
	glEnd();
	//stanga
	glBegin(GL_POLYGON); 
	glNormal3d(-1, -1, -1);
	glVertex3d(-1, -1, -1);
	glNormal3d(-1, 1, -1);
	glVertex3d(-1, 1, -1);
	glNormal3d(1, 1, -1);
	glVertex3d(1, 1, -1);
	glNormal3d(1, -1, -1);
	glVertex3d(1, -1, -1);
	glEnd();
	//sus
	glBegin(GL_POLYGON); 
	glNormal3d(-1, 1, -1);
	glVertex3d(-1, 1, -1);
	glNormal3d(-1, 1, 1);
	glVertex3d(-1, 1, 1);
	glNormal3d(1, 1, 1);
	glVertex3d(1, 1, 1);
	glNormal3d(1, 1, -1);
	glVertex3d(1, 1, -1);
	glEnd();
	//jos
	glBegin(GL_POLYGON); 
	glNormal3d(-1, -1, -1);
	glVertex3d(-1, -1, -1);
	glNormal3d(-1, -1, 1);
	glVertex3d(-1, -1, 1);
	glNormal3d(1, -1, 1);
	glVertex3d(1, -1, 1);
	glNormal3d(1, -1, -1);
	glVertex3d(1, -1, -1);
	glEnd();
	}
void cub() //cub fara normale
	{
	glBegin(GL_POLYGON); //fata
	glVertex3d(-1, -1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(-1, 1, -1);
	glVertex3d(-1, -1, 1);
	glEnd();
	//spate
	glBegin(GL_POLYGON); 
	glVertex3d(1, -1, 1);
	glVertex3d(1, 1, 1);
	glVertex3d(1, 1, -1);
	glVertex3d(1, -1, 1);
	glEnd();
	//dreapta
	glBegin(GL_POLYGON); 
	glVertex3d(-1, -1, 1);
	glVertex3d(-1, 1, 1);
	glVertex3d(1, 1, 1);
	glVertex3d(1, -1, 1);
	glEnd();
	//stanga
	glBegin(GL_POLYGON); 
	glVertex3d(-1, -1, -1);
	glVertex3d(-1, 1, -1);
	glVertex3d(1, 1, -1);
	glVertex3d(1, -1, -1);
	glEnd();
	//sus
	glBegin(GL_POLYGON); 
	glVertex3d(-1, 1, -1);
	glVertex3d(-1, 1, 1);
	glVertex3d(1, 1, 1);
	glVertex3d(1, 1, -1);
	glEnd();
	//jos
	glBegin(GL_POLYGON); 
	glVertex3d(-1, -1, -1);
	glVertex3d(-1, -1, 1);
	glVertex3d(1, -1, 1);
	glVertex3d(1, -1, -1);
	glEnd();

	}
void display()
	{
	GLfloat light_position[] = {1, 1, 1, 0};
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glColor3d(0,1,0);
	glPushMatrix();
	
	glTranslated(-2.5,-2.5,-5);
	//transf. de modelare
	cub_cu_normale();
	glPopMatrix();
	glPushMatrix();

	glTranslated(-2.5,2.5,-5);
	//transf. de modelare
	cub();
	glPopMatrix();
	glPushMatrix();
	
	glTranslated(2.5,-2.5,-5);
	//transf. de modelare
	glutSolidCube(2);
	glPopMatrix();
	glutSwapBuffers();
	
	}
void reshape (int w, int h)
	{
	h=(h==0)? 1:h;
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, (GLfloat)w/(GLfloat)h, 1, 40);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslated(0,0,-5);
	}
int main(int argc, char** argv)
	{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(25,25);
	glutCreateWindow("Cub");
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape);
	glutMainLoop();
	}
	*/
/*#include <gl/glut.h>
void init()
{
glClearColor(1.0, 1.0, 1.0, 1.0);
//selecteaza culoarea de fond
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

}
void Triangle()
{
glBegin(GL_POLYGON);
glVertex3d(-2, -2, 0);
glVertex3d(2, -2, 0);
glVertex3d(0, 2, 0);
glEnd();
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glDisable(GL_BLEND);
glColor3d(0.2,0.2,0.2); //culoarea dreptunghiului
glBegin(GL_POLYGON); //desenare dreptunghi
glVertex3d(6,-2,0);
glVertex3d(6,2,0);
glVertex3d(-10,2,0);
glVertex3d(-10,-2,0);


glEnd();
glEnable(GL_BLEND);
glPushMatrix();
glTranslated(-8, 2, 0);
glColor4d(0.8,0.8,0.8,0.25);
Triangle(); //primul triunghi
glPopMatrix();
//......
glEnd();
glEnable(GL_BLEND);
glPushMatrix();
glTranslated(-4, 2, 0);
glColor4d(0.8,0.8,0.8,0.5);
Triangle(); //al doilea triunghi
glPopMatrix();
glPopMatrix();

glEnd();
glEnable(GL_BLEND);
glPushMatrix();
glTranslated(0, 2, 0);
glColor4d(0.8,0.8,0.8,0.75);
Triangle(); //al doilea triunghi
glPopMatrix();
glEnd();
glEnable(GL_BLEND);
glPushMatrix();
glTranslated(4, 2, 0);
glColor4d(0.8,0.8,0.8,0.75);
Triangle(); //al doilea triunghi
glPopMatrix();
glPopMatrix();


glPopMatrix();
glutSwapBuffers();
}
void reshape (int w, int h)
{
h=(h==0)? 1:h;
glViewport(0, 0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(60, (GLfloat)w/(GLfloat)h, 1, 40);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glTranslated(0, 0, -20); //transf. de obs
}
int main(int argc, char** argv)
	{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(25,25);
	glutCreateWindow("triunghi");
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape);
	glutMainLoop();
	}
	*/
#include <GL/glut.h>
#include <stdio.h>
static GLuint listName;
static GLint fogMode;
void Teapot(GLfloat x, GLfloat y, GLfloat z)
{
glPushMatrix();
glTranslatef(x,y,z);
glutSolidTeapot(1.5);
glPopMatrix();
}
void init(void)
{
float mat_ambient[] = {0.2, 0, 0, 1.0};
float mat_diffuse[] = {0.6, 0, 0, 1.0};
float mat_shininess[] = {90.0};
float mat_specular[] = {1, 1, 1, 1};
glMaterialfv (GL_FRONT, GL_SHININESS, mat_shininess);
glMaterialfv (GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv (GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv (GL_FRONT, GL_AMBIENT, mat_ambient);
glEnable(GL_FOG);
{
float fogDensity = 0.04;
float fog_color[] = {0.5, 0.5, 0.5, 1.0};
fogMode = GL_EXP;
glFogi (GL_FOG_MODE, fogMode);
glFogf (GL_FOG_DENSITY, fogDensity);
glFogfv (GL_FOG_COLOR, fog_color);
glHint (GL_FOG_HINT, GL_DONT_CARE);
glFogf (GL_FOG_START, 1.0);
glFogf (GL_FOG_END, 100.0);
}
glClearColor(0.5, 0.5, 0.5, 1.0); /* culoarea cetii */
glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glPushMatrix();
Teapot(-3, -0.5, -10);
//... de desenat restul teapot-urilor
glPopMatrix();
glutSwapBuffers();
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(60, (GLfloat)w/(GLfloat)h, 0.1, 100);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity ();
//... stabilirea pozitiei observatorului
}

int main(int argc, char** argv)
	{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(25,25);
	glutCreateWindow("triunghi");
	init();
	glutDisplayFunc(display); 
	glutReshapeFunc(reshape);
	glutMainLoop();
	}