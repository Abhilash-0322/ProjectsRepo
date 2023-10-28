import gradio as gr
import transformers

# Load the text generator model
model = transformers.AutoModelForCausalLM.from_pretrained("gpt2-medium")

# Generate text
def generate_text(prompt, max_length=100):
    input_ids = model.prepare_inputs_for_generation(prompt)
    output = model.generate(input_ids, max_length=max_length)
    return output[0][len(prompt):]

# Create a Gradio interface
gr.Interface(fn=generate_text, inputs=["text"], outputs=["text"]).launch()