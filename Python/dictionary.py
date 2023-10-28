# import requests

# word = 'list'
# api_url = 'https://api.api-ninjas.com/v1/dictionary?word={}'.format(word)
# response = requests.get(api_url, headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'})
# if response.status_code == requests.codes.ok:
#     print(response.text)
# else:
#     print("Error:", response.status_code, response.text)
# import requests

# api_url = 'https://api.api-ninjas.com/v1/facedetect'
# headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'}
# image_file_descriptor = open('moco.png', 'rb')
# files = {'image': image_file_descriptor}

# r = requests.post(api_url, files=files)
# print(r.json())


# import requests

# api_url = 'https://api.api-ninjas.com/v1/facedetect'
# image_file_descriptor = open('moco.png', 'rb')

# files = {'image': image_file_descriptor}

# r = requests.post(api_url, files=files,headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'})
# print(r.json())
# import requests

# api_url = 'https://api.api-ninjas.com/v1/facedetect'
# image_file_descriptor = open('moco.png', 'rb')

# files = {'image': image_file_descriptor}

# # Send the POST request with the API key
# r = requests.post(api_url, files=files, headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'})

# # Check if the request was successful (status code 200)
# if r.status_code == 200:
#     # Parse the JSON response into a Python dictionary
#     response_data = r.json()

#     # Now you can work with the response_data dictionary
#     # For example, you can access specific fields like this:
#     face_count = response_data.get('face_count', 0)
    
#     print(f"Number of faces detected: {face_count}")
# else:
#     print(f"Request failed with status code {r.status_code}")
# import requests
# name = 'golden retriever'
# api_url = 'https://api.api-ninjas.com/v1/dogs?name={}'.format(name)
# response = requests.get(api_url, headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'})
# if response.status_code == requests.codes.ok:
#     print(response.text)
# else:
#     print("Error:", response.status_code, response.text)
# import requests
# country = 'in' # Canada.
# year = '2023'
# api_url = 'https://api.api-ninjas.com/v1/holidays?country={}&year={}'.format(country, year)
# response = requests.get(api_url, headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl'})
# if response.status_code == requests.codes.ok:
#     print(response.text)
# else:
#     print("Error:", response.status_code, response.text)