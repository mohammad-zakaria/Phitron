""" . Go to this repo: https://pypi.org/project/pyjokes/ and try to make a chat bot to tell you joke using pyjokes.
Write a function named tell_some_jokes() and write your code inside this function. """

import pyjokes

def tell_some_jokes():
    return pyjokes.get_joke()



greet_words = ["hi", "hello", "hey", "howdy", "hola", "greetings", "yo"]
bye_words = ["bye", "goodbye", "see you", "cya", "adios", "later"]
bad_words = ["stupid", "idiot", "dumb", "fool", "moron", "loser"]
jokes_words = ["joke", "jokes", "funny", "laugh", "laughing"]

def listen():
    """ Get user input """
    return input("Say something: ")


def decide(command):
    """ Process user input """
    # print(command)
    command = command.lower()
    broken_words = command.split(" ")
    # print(broken_words)
    for word in broken_words:
        if word in greet_words:
            respond("Hello, how are you?")
            break
        elif word in bye_words:
            respond("Goodbye, see you later!")
            break
        elif word in bad_words:
            respond("That's not very nice!")
            break
        elif word in jokes_words:
            respond(tell_some_jokes())
            break


def respond(response):
    """ Talk back to user """
    print(response)


while True:
    command = listen()
    decide(command)
