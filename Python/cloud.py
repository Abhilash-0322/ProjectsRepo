import io
import os

from google.cloud import language

# Create a client object
client = language.Client()

# Create a request object
request = language.TextGenerationRequest(
    document=language.Document(
        text_content="Write a poem about a cat."
    )
)

# Generate the response
response = client.generate_text(request)

# Print the response
print(response.text_content)