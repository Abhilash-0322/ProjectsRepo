import pprint
import google.generativeai as palm
import os

palm.configure(api_key=os.environ['AIzaSyAzUsyadce88Rm8QQLjQStnUhP43b0evz4'])
# model = palm.get_model('models/chat-bison-001')

for model in palm.list_models():

    pprint.pprint(model) # 🦎🦦🦬🦄