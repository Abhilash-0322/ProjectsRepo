import google.generativeai as palm
import os

palm.configure(api_key=os.environ['API_KEY'])
response = palm.generate_text(prompt="The opposite of hot is")
print(response.result) #  'cold.'