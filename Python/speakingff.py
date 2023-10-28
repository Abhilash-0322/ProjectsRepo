import pyttsx3

class Character():
    def __init__(self, name, age, dialogues):
        self.name = name
        self.age = age
        self.dialogues = dialogues

class Elite_Character(Character):
    def __init__(self, name, age, dialogues, theme):
        super().__init__(name, age, dialogues)
        self.theme = theme

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Function to make a character speak
def speak_character(character):
    if character:
        for dialogue in character.dialogues:
            engine.say(dialogue)
            engine.runAndWait()
    else:
        print("Character not found.")

# Create character instances
charcter1 = Character("Maxim", 17, ["more deep fried goodies please, but 'don't tell Misha " ,"everyone else is joining the numbers but what about me","more responsibilites ah man","oh man i should have finished those deep fried chicken wings from lash nigh ah! , im starving"])
character2 = Character("Alok", 28, ["Feel the pressure to feel the energy","i gonna be so bigger"])
character2e = Elite_Character("Awakened Alok", 28, ["Beats with healing power can cure your hot","Love Make All The Difference","Make YOur Sound Louder"], theme="Alok Awakening")
# Add more characters here

# Get user input and make the character speak
while True:
    user_input = input("Enter a character's name (or 'exit' to quit): ")
    if user_input == 'exit':
        break
    if user_input == "Maxim":
        speak_character(charcter1)
    elif user_input == "Alok":
        speak_character(character2)
    elif user_input == "Awakened Alok":
        speak_character(character2e)
    # Add more characters here
    else:
        print("Character not found.")
