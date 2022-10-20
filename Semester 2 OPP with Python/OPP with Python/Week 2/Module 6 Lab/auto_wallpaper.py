""" Problem:
Download and change desktop wallpaper automatically.

 """

import requests
import json
import PyWallpaper


api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# get json data from api
response = requests.get(api_url)
content = response.content.decode("utf-8")
print(type(content))

# convert string to json
dict_content = json.loads(content)
print(type(dict_content))

# get image url
image_url = dict_content["url"]
print(image_url)

# download image
image = requests.get(image_url)

# save image
with open("apod.jpg", "wb") as f:
    f.write(image.content)

# set image as wallpaper
PyWallpaper.change_wallpaper("E:\Zakaria\zakaria icpc\phitron zack\Semester 2 OPP with Python\OPP with Python\Week Two\Module 6 Lab\apod.jpg")