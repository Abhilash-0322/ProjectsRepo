import speech_recognition as sr
import win32com.client
import webbrowser
import pygame

# Initialize Pygame
pygame.init()

# Create a Pygame window
window = pygame.display.set_mode((800, 600), pygame.RESIZABLE)
pygame.display.set_caption("Voice Assistant")
robot_image = pygame.image.load("moco2.png")

# Create a Pygame font for displaying text
font = pygame.font.Font(None, 36)

# Initialize the speech recognizer and speaker
speaker = win32com.client.Dispatch("SAPI.SpVoice")

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        audio = r.listen(source)
        try:
            print('recognizing')
            query = r.recognize_google(audio,language='hi-in' and 'en-in')
            print(f"User said: {query}")
            return query
        except Exception as e:
            return "What Do You Mean, Say Again"

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Clear the Pygame window
    window.blit(robot_image, (0, 0))

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
    text_surface = font.render(query, True, (90, 72, 33))
    window.blit(text_surface, (50, 100))

    # Update the Pygame display
    pygame.display.update()

    # Speak the recognized text
    speaker.Speak(query)

pygame.quit()
