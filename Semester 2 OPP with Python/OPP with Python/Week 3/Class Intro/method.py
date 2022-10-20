def add(a,b):
    return a+b

def sub(a,b):
    return a-b


class Phone:
    brand = "Apple"
    color = "Black"
    price = 1000
    features = ["Touch ID", "Face ID", "3D Touch"]

    def call(self): # self is a reference to the object itself
        print("Calling...")

    def message(self, number, message):
        sms = f'sending message "{message}" to {number}'
        return sms


myPhone = Phone()
myPhone.call()
sms = myPhone.message("1234567890", "Hello World")
print(sms)