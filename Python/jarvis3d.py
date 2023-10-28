# import pygame
# from pygame.locals import *
# from OpenGL.GL import *
# from OpenGL.GLUT import *
# from OpenGL.GLU import *

# # Initialize Pygame
# pygame.init()

# # Create a Pygame window
# window = pygame.display.set_mode((800, 600), pygame.OPENGL | pygame.DOUBLEBUF)
# pygame.display.set_caption("object")

# # Initialize OpenGL
# glViewport(0, 0, 800, 600)
# glMatrixMode(GL_PROJECTION)
# glLoadIdentity()
# gluPerspective(45, (800/600), 0.1, 50.0)
# glMatrixMode(GL_MODELVIEW)
# glLoadIdentity()

# # Cube vertices and edges
# vertices = (
#     (1, -1, -1),
#     (1, 1, -1),
#     (-1, 1, -1),
#     (-1, -1, -1),
#     (1, -1, 1),
#     (1, 1, 1),
#     (-1, -1, 1),
#     (-1, 1, 1)
# )

# edges = (
#     (0, 1),
#     (1, 2),
#     (2, 3),
#     (3, 0),
#     (4, 5),
#     (5, 6),
#     (6, 7),
#     (7, 4),
#     (0, 4),
#     (1, 5),
#     (2, 6),
#     (3, 7)
# )

# # Rotating angle
# angle = 0

# # Main loop
# running = True
# while running:
#     for event in pygame.event.get():
#         if event.type == pygame.QUIT:
#             running = False

#     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
#     glLoadIdentity()
#     glTranslatef(0, 0, -5)
#     glRotatef(angle, 1, 1, 1)

#     glBegin(GL_LINES)
#     for edge in edges:
#         for vertex in edge:
#             glVertex3fv(vertices[vertex])
#     glEnd()

#     pygame.display.flip()
#     pygame.time.wait(10)
#     angle += 1

# pygame.quit()


import speech_recognition as sr
import win32com.client
import webbrowser
import pygame
from pygame.locals import *
from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

# Initialize Pygame
pygame.init()

# Create a resizable Pygame window
window = pygame.display.set_mode((800, 600), pygame.OPENGL | pygame.DOUBLEBUF)
pygame.display.set_caption("Voice Assistant")

# Initialize OpenGL
glViewport(0, 0, 800, 600)
glMatrixMode(GL_PROJECTION)
glLoadIdentity()
gluPerspective(45, (800/600), 0.1, 50.0)
glMatrixMode(GL_MODELVIEW)
glLoadIdentity()

# Cube vertices and edges
vertices = (
    (1, -1, -1),
    (1, 1, -1),
    (-1, 1, -1),
    (-1, -1, -1),
    (1, -1, 1),
    (1, 1, 1),
    (-1, -1, 1),
    (-1, 1, 1)
)

edges = (
    (0, 1),
    (1, 2),
    (2, 3),
    (3, 0),
    (4, 5),
    (5, 6),
    (6, 7),
    (7, 4),
    (0, 4),
    (1, 5),
    (2, 6),
    (3, 7)
)

# Rotating angle
angle = 0

font = pygame.font.Font(None, 36)

# Initialize the speech recognizer and speaker
speaker = win32com.client.Dispatch("SAPI.SpVoice")

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        audio = r.listen(source)
        try:
            print('recognizing')
            query = r.recognize_google(audio, language='hi-in' and 'en-in')
            print(f"User said: {query}")
            return query
        except Exception as e:
            return "What Do You Mean Say Again"

# Function for 3D rendering
def render_cube():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    glTranslatef(0, 0, -5)
    glRotatef(angle, 1, 1, 1)

    glBegin(GL_LINES)
    for edge in edges:
        for vertex in edge:
            glVertex3fv(vertices[vertex])
    glEnd()

# Main loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Render the 3D cube
    render_cube()

    # Listen for voice commands
    print("listening....")
    query = takeCommand()

    # Define websites to open
    sites = [["youtube", "https://youtube.com"], ["wikipedia", "https://www.wikipedia.org"], ["gmail", "https://www.gmail.com"]]
    
    for site in sites:
        if f"open {site[0]}" in query.lower():
            webbrowser.open(site[1])
            print(f"opening {site[0]}")

    # Display the recognized text on the Pygame window
    text_surface = font.render(query, True, (255, 0, 0))
    window.blit(text_surface, (50, 150))

    # Update the Pygame display
    pygame.display.flip()

    # Speak the recognized text
    speaker.Speak(query)

    # Rotate the cube
    angle += 1

pygame.quit()


# import speech_recognition as sr
# import win32com.client
# import webbrowser
# from OpenGL.GL import *
# from OpenGL.GLUT import *
# from OpenGL.GLU import *

# # Initialize OpenGL
# glutInit()
# glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH)
# glutInitWindowSize(800, 600)
# glutCreateWindow("Voice Assistant with 3D Cube")

# # Cube vertices and edges
# vertices = (
#     (1, -1, -1),
#     (1, 1, -1),
#     (-1, 1, -1),
#     (-1, -1, -1),
#     (1, -1, 1),
#     (1, 1, 1),
#     (-1, -1, 1),
#     (-1, 1, 1)
# )

# edges = (
#     (0, 1),
#     (1, 2),
#     (2, 3),
#     (3, 0),
#     (4, 5),
#     (5, 6),
#     (6, 7),
#     (7, 4),
#     (0, 4),
#     (1, 5),
#     (2, 6),
#     (3, 7)
# )

# # Rotating angle
# angle = 0

# # OpenGL initialization
# def init():
#     glClearColor(0.0, 0.0, 0.0, 1.0)
#     glClearDepth(1.0)
#     glEnable(GL_DEPTH_TEST)

# def draw_cube():
#     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
#     glLoadIdentity()
#     glTranslatef(0, 0, -5)
#     glRotatef(angle, 1, 1, 1)

#     glBegin(GL_LINES)
#     for edge in edges:
#         for vertex in edge:
#             glVertex3fv(vertices[vertex])
#     glEnd()

#     glutSwapBuffers()

# # Initialize the speech recognizer and speaker
# speaker = win32com.client.Dispatch("SAPI.SpVoice")

# def takeCommand():
#     r = sr.Recognizer()
#     with sr.Microphone() as source:
#         audio = r.listen(source)
#         try:
#             print('recognizing')
#             query = r.recognize_google(audio, language='hi-in' and 'en-in')
#             print(f"User said: {query}")
#             return query
#         except Exception as e:
#             return "Some Error Occurred, Sorry from Jarvis"

# def update_frame(value):
#     global angle
#     angle += 1
#     glutPostRedisplay()
#     glutTimerFunc(10, update_frame, 0)

# # Main loop
# glutDisplayFunc(draw_cube)
# init()
# glutTimerFunc(10, update_frame, 0)

# while True:
#     query = takeCommand()

#     # Define websites to open
#     sites = [["youtube", "https://youtube.com"], ["wikipedia", "https://www.wikipedia.org"], ["gmail", "https://www.gmail.com"]]
    
#     for site in sites:
#         if f"open {site[0]}" in query.lower():
#             webbrowser.open(site[1])
#             print(f"opening {site[0]}")

#     # Speak the recognized text
#     speaker.Speak(query)