import speech_recognition as sr
from pydub import AudioSegment

audio_file_path = "D:/voice.mp3"

# Convert audio file to WAV format
audio = AudioSegment.from_file(audio_file_path, format="mp3")
wav_output_path = "D:/voice.wav"
audio.export(wav_output_path, format="wav")

# Initialize the recognizer
r = sr.Recognizer()

# Load the WAV audio file
with sr.AudioFile(wav_output_path) as source:
    audio_data = r.record(source)

# Transcribe the audio
transcription = r.recognize_google(audio_data)

# Print the transcription
print(transcription)