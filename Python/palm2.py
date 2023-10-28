import google.generativeai as palm
palm.configure(api_key="AIzaSyAzUsyadce88Rm8QQLjQStnUhP43b0evz4")
models=[m for m in palm.list_models() if "generatedText" in m.supported_generation_methods]
for m in models:
    print(f"MOdel name:{m.name}")
model=models[0].name
model
prompt="hello how are you"
completion=palm.generate_text(
    model=model,
    prompt=prompt,
    temperature=0.3,
    max_output_tokens=800,
)
print(completion.result)