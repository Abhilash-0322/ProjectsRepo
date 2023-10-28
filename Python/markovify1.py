import markovify

# Load the text corpus
with open("myfile.txt") as f:
    text = f.read()

# Train the model
text_model = markovify.Text(text)
# Generate a random sentence
sentence = text_model.make_sentence()

# Generate a short sentence with a character limit
short_sentence = text_model.make_short_sentence(max_chars=1000)
print(sentence)