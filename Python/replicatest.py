# import requests
# headers = {
#   'Content-Type': 'application/x-www-form-urlencoded'
# }
# payload = 'client_id=00000000-0000-0000-0000-000000000001&secret=mySecretPassword'

# r = requests.post('https://api.replicastudios.com/auth', headers = headers, data = payload)

# print(r.json())
import requests
headers = {
  'Authorization': 'Bearer {token}'
}

r = requests.get('https://api.replicastudios.com/speech', params={
  'txt': 'Please call Stella',  'speaker_id': 'c4fe46c4-79c0-403e-9318-ffe7bd4247dd'
}, headers = headers)

print(r.json())