import openai
import pyttsx3

openai.api_key = "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"

# Set up pyttsx3 engine
engine = pyttsx3.init()

while True:
    user_input = input("Enter your input: ")

    response = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",
        messages=[
            {
                "role": "user",
                "content": user_input
            }
        ],
        temperature=1,
        max_tokens=256,
        top_p=1,
        frequency_penalty=0,
        presence_penalty=0
    )

    # Access and print the generated response
    generated_text = response["choices"][0]["message"]["content"]
    print(generated_text)

    # Say the generated response using pyttsx3
    engine.say(generated_text)
    engine.runAndWait()