# import os
# import win32.client
# import speech_recognition as sr
# def say(text):
#     os.system(f"say {text}")
# if __name__=='__main__':
#     print('PyCharm')
#     say("hello")
import speech_recognition as sr
import win32com.client
import webbrowser
import datetime
speaker=win32com.client.Dispatch("SAPI.SpVoice")
def takeCommand():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        r.pause_threshold=0.6
        audio=r.listen(source)
        try:
            print('recognizing')
            query=r.recognize_google(audio,language='en-us'and'en-in')
            print(f"User said:{query}")
            return query
        except Exception as e:
            return "What Do You Mean, say again"

while True:
    print("listening....")
    query=takeCommand()
    #to add more websites
    sites=[["youtube","https//youtube.com"],["wikipedia","https://www.wikipedia.org"],["gmail","https://www.gmail.com"]]
    for site in sites:
        if f"open {site[0]}" in query.lower():
            webbrowser.open(f"{site[1]}")
            print(f"opening {site[0]}")
    speaker.Speak(query)
    #to add tasks
    if "the time" in query:
        strfTime=datetime.datetime.now().strftime("%H:%M:%S")
        print(strfTime)
        speaker.speak(f"Time is {strfTime}")       