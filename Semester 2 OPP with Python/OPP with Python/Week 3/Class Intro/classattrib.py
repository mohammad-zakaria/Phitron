class Shop:
    cart = []

    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.cart.append(item)


shopper1 = Shop("John")
shopper1.add_to_cart("T-shirt")
print(shopper1.cart)

shopper2 = Shop("Mary")
shopper2.add_to_cart("Abaya")


print(shopper2.cart)
