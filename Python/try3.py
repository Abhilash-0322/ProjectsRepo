import googlevoice

# Create a Google Voice client.
client = googlevoice.Client()

# Login to Google Voice.
client.login()

# Get the user's voice commands.
voice_commands = input("Enter your voice commands: ")

# Process the voice commands.
if voice_commands == "call John":
    client.call("123-456-7890")
elif voice_commands == "send text to Mary":
    client.send_text("123-456-7890", "Hello, Mary!")
elif voice_commands == "play music":
    client.play_music()
elif voice_commands == "stop music":
    client.stop_music()
else:
    print("Invalid voice command.")