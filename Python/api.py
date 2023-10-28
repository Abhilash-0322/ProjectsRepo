import os
import openai

openai.api_key = os.getenv("e4e1920c-a945-4f48-953f-7b629ba710e6")

response = openai.ChatCompletion.create
model="gpt-3.5-turbo",
messages=[
  {
    "role": "user",
    "content": " hi"
  }
  ],
temperature=1,
max_tokens=256,
top_p=1,
frequency_penalty=0,
presence_penalty=0
print(response)