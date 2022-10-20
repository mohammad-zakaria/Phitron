class Shopper:

    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        self.cart.append({'item':item, 'price':price, 'quantity':quantity})

    def checkout(self, amount):
        price = 0
        for item in self.cart:
            price += item['price'] * item['quantity']
        if amount < price:
            return "Insufficient funds"
        elif amount > price:
            return f'Your change is {amount - price}'
        else:
            return "Thank you for shopping with us"

shopping = Shopper('Zack')
shopping.add_to_cart('T-shirt', 50, 2)


print(shopping.checkout(1000))