#include<iostream>
#include <GL\glut.h>
using namespace std;

void DrawHeart()
{
	int n = 40;

	float r = 1.0;

	float pi = 3.141593;


	

	glBegin(GL_LINES);

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < n; j++)

		{

			float u1 = j * 2 * pi / n;

			float u2 = (j + 1) * 2 * pi / n;

			float v = i * 2 * pi / n;

			float x1 = r * (cos(v + pi / 2) + 2 * sin(v / 2) * cos(u1));

			float y1 = r * (sin(v + pi / 2) + 2 * sin(v / 2) * sin(u1));

			float x2 = r * (cos(v + pi / 2) + 2 * sin(v / 2) * cos(u2));

			float y2 = r * (sin(v + pi / 2) + 2 * sin(v / 2) * sin(u2));

			glVertex2f(x1, y1);

			glVertex2f(x2, y2);

		}

	}

	glEnd();
}
void myDisplay()
{
	DrawHeart();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Draw a circle");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}