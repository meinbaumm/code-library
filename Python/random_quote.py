# Sends inspirational quotes to the user using Zen Quotes API

import requests
from json import loads

def return_quote():
  response = requests.get("https://zenquotes.io/api/random")
  json_data = loads(response.text)
  quote = json_data[0]['q'] + " -" + json_data[0]['a']
  return quote

quote = return_quote()
print(quote)
