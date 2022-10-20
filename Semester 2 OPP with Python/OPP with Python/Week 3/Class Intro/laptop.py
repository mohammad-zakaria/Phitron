class Laptop:
    def __init__(self, brand, model, price):
        self.brand = brand
        self.model = model
        self.price = price

    def apply_discount(self, num):
        off_price = (num / 100) * self.price
        return self.price - off_price
    def change_discount(self, num = 5):
        self.change_discount(num)

        


my_laptop = Laptop("Apple", "Macbook Pro", 1000)
my_laptop.apply_discount(10)
print(my_laptop.price)

print(my_laptop.__dict__)