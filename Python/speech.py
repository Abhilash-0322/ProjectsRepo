# import requests

# url = "https://play.ht/api/v1/convert"

# payload = {
#     "content": ["hey dude"],
#     "voice": "en-US-JennyNeural"
# }
# headers = {
#     "accept": "application/json",
#     "content-type": "application/json",
#     "AUTHORIZATION": "1f029f25ad0d4fd5b5474d01f3f594c2",
#     "X-USER-ID": "9ubOl0k3zMN39elxsrlcBVEB2xA2"
# }

# response = requests.post(url, json=payload, headers=headers)

# print(response.text)
import pyttsx3
while True:

    engine=pyttsx3.init()
    a=input("enter your input:")
    engine.say(a)
    # engine.save_to_file(name.mp3)
    engine.runAndWait()




