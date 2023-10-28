import requests
import shutil

data = 'https://www.google.com/search?q=who+made+the+discord+python+library&rlz=1C1ONGR_enIN1018IN1018&oq=who+made+the+discord+python+library&aqs=chrome..69i57j33i160.14189j1j15&sourceid=chrome&ie=UTF-8#ip=1'
fmt = 'png'
api_url = 'https://api.api-ninjas.com/v1/qrcode?data={}&format={}'.format(data, fmt)
response = requests.get(api_url, headers={'X-Api-Key': 'Yzr9l54OLX4+X7JS2VsV/Q==NM5djAuZUBo6JVPl',  'Accept': 'image/png'}, stream=True)
if response.status_code == requests.codes.ok:
    with open('img.jpg', 'wb') as out_file:
        shutil.copyfileobj(response.raw, out_file)
else:
    print("Error:", response.status_code, response.text)