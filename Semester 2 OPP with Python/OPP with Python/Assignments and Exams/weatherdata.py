""" Use web search to find some API to get weather data. Use that to get your region’s weather data every 30 minute.

Write a function named weather_data() and write your code inside this function.
 """

import requests
import time
 
api_key = 'e5a6fbe515c5e02865b18c075cc22dc4'
 
city = input("Enter city: ")
 
def weather_data(city):
    complete_api_link = "https://api.openweathermap.org/data/2.5/weather?q="+city+"&appid="+api_key
    api_link = requests.get(complete_api_link)
    api_data = api_link.json()
    temp_city = ((api_data['main']['temp']) - 273.15)
    weather_desc = api_data['weather'][0]['description']
    hmdt = api_data['main']['humidity']
    wind_spd = api_data['wind']['speed']
    date_time = time.strftime("%d %b %Y | %I:%M:%S %p")
 
    print ("-------------------------------------------------------------")
    print ("Weather Stats for - {}  || {}".format(city.upper(), date_time))
    print ("-------------------------------------------------------------")
 
    print ("Current temperature is: {:.2f} deg C".format(temp_city))
    print ("Current weather desc  :",weather_desc)
    print ("Current Humidity      :",hmdt, '%')
    print ("Current wind speed    :",wind_spd ,'kmph')

while True:
    weather_data(city)
    time.sleep(1800) # 30 minutes


