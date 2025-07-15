class vehicle:
    def __init__(self,name,price):
        self.name =name
        self.price =price
    def move(self):
        pass
class Bus(vehicle):
    def __init__(self,name,price,seat):
        super().__init__(name,price)
    