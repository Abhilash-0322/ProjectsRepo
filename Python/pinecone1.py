import pinecone
import numpy as np

# Set up Pinecone client
pinecone.init(api_key="853858dc-08d0-4f7e-bab3-d307d0f813c0")
index_name = "codegpt"

# Define your prompt
prompt = "Write a Python function to calculate the factorial of a number."

# Encode the prompt as a vector
vector = np.array([0.1, 0.2, 0.3, ...])   # Replace with your own vector representation

# Insert the prompt vector into the Pinecone index
pinecone.Index(index_name).upsert(ids=["prompt"], vectors=[vector])

# Search for similar prompts
query_vector = vector  # Use the same vector as the prompt
results = pinecone.Index(index_name).query(queries=[query_vector], top_k=5)

# Print the similar prompts
for result in results[0].results:
    similar_prompt = result.id
    print(similar_prompt)

# Clean up
pinecone.deinit()