import cohere 

co = cohere.Client(
  api_key="dFNGBqLRL6OwmLepsPOvwUCePVzdkcs6KlmTfupw", # This is your trial API key
) 

while True:
    prompt1=input("prompt:")
    stream = co.chat_stream( 
    model='command-r-plus',
    message=prompt1,
    temperature=0.3,
    # chat_history=[{"role": "User", "message": "hi"}, {"role": "Chatbot", "message": "hi how was you day going?"}],
    chat_history=[],
    prompt_truncation='AUTO',
    connectors=[{"id":"web-search"}]
    ) 

    for event in stream:
        if event.event_type == "text-generation":
            print(event.text, end='')
    print("\n")