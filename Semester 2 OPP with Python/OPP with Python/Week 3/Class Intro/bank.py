class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000


    def getbalace(self):
        return self.balance

    def withdraw(self, amount):
        if amount >= self.min_withdraw and amount <= self.max_withdraw and amount <= self.balance:
            self.balance -= amount
            return self.balance
        else:
            return "Invalid amount"

    def deposit(self, amount):
        self.balance += amount
        return self.balance
    
my_bank = Bank(10000)
print(my_bank.getbalace())
print(my_bank.withdraw(1000))
print(my_bank.deposit(1000))
