import torch
import torch.nn as nn
import torch.optim as optim
from torchtext.data import Field, TabularDataset, BucketIterator
import spacy
# Define the Seq2Seq model (encoder-decoder architecture)
class Seq2Seq(nn.Module):
    def __init__(self, input_dim, emb_dim, hidden_dim, output_dim):
        super().__init__()
        self.embedding = nn.Embedding(input_dim, emb_dim)
        self.rnn = nn.LSTM(emb_dim, hidden_dim)
        self.fc_out = nn.Linear(hidden_dim, output_dim)

    def forward(self, src):
        embedded = self.embedding(src)
        outputs, (hidden, cell) = self.rnn(embedded)
        predictions = self.fc_out(hidden.squeeze(0))
        return predictions

# Training the model (not shown in this brief example)

# Inference function
def generate_response(input_text, model, device, max_len=50):
    # Preprocess the input_text (tokenization, padding, etc.)
    # Run the model to generate a response
    return generated_response

# User interaction loop
nlp = spacy.load('en')

while True:
    user_input = input("You: ")
    if user_input == 'quit':
        break
    response = generate_response(user_input, model, device)
    print(f"ChatBot: {response}")