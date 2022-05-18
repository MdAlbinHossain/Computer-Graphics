#include <windows.h>
#include <GL/glut.h>

void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glOrtho(-4, 4, -4, 4, -4, 4);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_QUADS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(-2.0f, -2.0f);
  glVertex2f(2.0f, -2.0f);
  glVertex2f(2.0f, 2.0f);
  glVertex2f(-2.0f, 2.0f);
  glEnd();

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutCreateWindow("Simple Square");
  glutInitWindowSize(320, 320);
  glutInitWindowPosition(50, 50);
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}