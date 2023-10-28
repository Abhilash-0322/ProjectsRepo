from OpenGL.GLUT import *
from OpenGL.GL import *

def display():
    glClear(GL_COLOR_BUFFER_BIT)
    glutSolidTeapot(1)
    glFlush()

glutInit()
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB)
glutInitWindowSize(400, 400)
glutCreateWindow("PyOpenGL Test")
glutDisplayFunc(display)
glutMainLoop()
