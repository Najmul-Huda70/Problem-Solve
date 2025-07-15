class bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw =100
        self.max_withdraw =100000
    def get_balance(self):
        return self.balance
    def deposit(self,amount):
        if amount>0 :
            self.balance+=amount
    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print(f'fokira. you can not withdraw below {self.min_withdraw}') 
        elif amount > self.max_withdraw :
            print(f'bank fokir hoia jabe. you can not withdraw more than {self.max_withdraw}')
        else:
            self.balance-=amount
            print(f'here is your money {amount}')
            print(f'Your Bank balance after withdraw :{self.balance}')

islamic = bank(30000)
islamic.withdraw(25)
islamic.withdraw(256546456)
islamic.withdraw(2500)

dbbl =bank(5000)
dbbl.deposit(2000)
dbbl.deposit(100)
print(dbbl.get_balance())