import requests

class WeatherBot:
    def __init__(self, api_key):
        self.api_key = api_key
        self.base_url = "https://api.weatherapi.com/v1/current.json"

    def get_weather(self, location):
        params = {
            "key": self.api_key,
            "q": location
        }
        response = requests.get(self.base_url, params=params)

        if response.status_code == 200:
            weather_data = response.json()
            temperature = weather_data["current"]["temp_c"]
            condition = weather_data["current"]["condition"]["text"]
            humidity = weather_data["current"]["humidity"]

            return f"The weather in {location} is {condition}. Temperature: {temperature}°C. Humidity: {humidity}%."
        else:
            return "Sorry, I couldn't fetch the weather data at the moment."

if __name__ == "__main__":
    api_key = "378f3248f68a4674b5e112941231110"
    weather_bot = WeatherBot(api_key)

    while True:
        user_input = input("Ask me about the weather (e.g., 'What's the weather like in New York today?'): ")
        if "weather" in user_input.lower():
            location = user_input.split("in")[1].strip()
            response = weather_bot.get_weather(location)
            print(response)
        else:
            print("I can provide weather information. Try asking about the weather.")
