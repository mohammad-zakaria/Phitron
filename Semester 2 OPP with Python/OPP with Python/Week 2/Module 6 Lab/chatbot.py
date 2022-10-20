""" Chatbot
    Steps:
    1. Get user input/listen
    2. process/decide
    3. respond/talk back
 """

greet_words = ["hi", "hello", "hey", "howdy", "hola", "greetings", "yo"]
bye_words = ["bye", "goodbye", "see you", "cya", "adios", "later"]
bad_words = ["stupid", "idiot", "dumb", "fool", "moron", "loser"]

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


def respond(response):
    """ Talk back to user """
    print(response)


while True:
    command = listen()
    decide(command)
