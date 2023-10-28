"""
At the command line, only need to run once to install the package via pip:
$ pip install google-generativeai
"""

import google.generativeai as palm

palm.configure(api_key="AIzaSyAzUsyadce88Rm8QQLjQStnUhP43b0evz4")

defaults = {
  'model': 'models/chat-bison-001',
  'temperature': 0.25,
  'candidate_count': 1,
  'top_k': 40,
  'top_p': 0.95,
}
context = ""
examples = []
messages = []
messages.append("hi")
response = palm.chat(
  **defaults,
  context=context,
  examples=examples,
  messages=messages
)
print(response.last) # Response of the AI to your most recent request