import requests
text = "hi"
def get_response(text):
    """Gets a response from me."""
 
    url = "https://www.googleapis.com/language/v1/text:annotate?key=AIzaSyAzUsyadce88Rm8QQLjQStnUhP43b0evz4"
 
    data = {
 
        "text": text,
 
        "format": "text/plain",
    }
    response = requests.post(url, data=data)
    print(response.json())
    # return response.json()

def get_summary(text):
 
    """Gets a summary of the text."""
 
    response = get_response(text)
 
    summary = response["documentSentiment"]["summary"]
 
    return summary
 
def get_entities(text):
 
    """Gets the entities in the text."""
 
    response = get_response(text)
 
    entities = response["entities"]
 
    return entities
 
def get_relations(text):
 
    """Gets the relations in the text."""
 
    response = get_response(text)
 
    relations = response["relations"]
 
    return relations
 
def get_sentiment(text):
 
    """Gets the sentiment of the text."""
 
    response = get_response(text)
 
    sentiment = response["documentSentiment"]["score"]
 
    return sentiment
 
def get_keywords(text):
 
    """Gets the keywords in the text."""
 
    response = get_response(text)
 
    keywords = response["documentSentiment"]["keywords"]
    return keywords

response = get_response(text)
print("Response:")
print(response)

# You can use these functions to get information about the text you provide to me. For example, you can get a summary of the text, the entities in the text, the relations in the text, the sentiment of the text, or the keywords in the text. 