# Note: you need to be using OpenAI Python v0.27.0 for the code below to work
import openai
import csv
openai.api_key ="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"
audio_file= open("D:/New folder/All In - Lyric Video - Free Fire World Series 2021 Singapore.mp3", "rb")
transcript = openai.Audio.translate("whisper-1", audio_file)
print(transcript)
with open("file.csv","a")as file:
    writer=csv.writer(file)
    writer.writerow([transcript])