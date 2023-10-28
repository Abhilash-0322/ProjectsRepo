import gpt_2_simple as gpt2

# Set the model name and the checkpoint directory
model_name = "124M"  # Choose the desired model size (e.g., "124M", "355M", etc.)
checkpoint_dir = "models"  # The directory where your downloaded models are stored

# Start a TensorFlow session
sess = gpt2.start_tf_sess()

# Load the pre-trained GPT-2 model
gpt2.load_gpt2(sess, model_name=model_name, checkpoint_dir=checkpoint_dir)

# Define your prompt
prompt = "what is maths"

# Generate text based on the prompt
generated_text = gpt2.generate(sess, model_name=model_name, prefix=prompt, length=100, temperature=0.7, return_as_list=True)

# Print the generated text
print(generated_text[0])

