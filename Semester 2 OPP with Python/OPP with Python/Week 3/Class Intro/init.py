
class Phone:
    manufactured = "Manufactured in China"
    def __init__(self, brand, color, price):
        self.brand = brand
        self.color = color
        self.price = price
    # __init__ is a special method that is called when an object is created 

    def call(self):
        print("Calling...")
    
    def message(self, number, message):
        sms = f'sending message "{message}" to {number}'
        return sms

myPhone = Phone("Apple", "Black", 1000)
print(myPhone.brand, myPhone.manufactured)