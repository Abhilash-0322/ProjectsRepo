import speech_recognition as sr

audio_file_path ="D:/New folder/voice.WAV"

# Initialize the recognizer
r = sr.Recognizer()

# Load the audio file
with sr.AudioFile(audio_file_path) as source:
    audio_data = r.record(source)

# Transcribe the audio
transcription = r.recognize_google(audio_data)

# Print the transcription
print(transcription)