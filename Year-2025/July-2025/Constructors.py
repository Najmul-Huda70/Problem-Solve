class phone:
    manufactured ='china'

    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand =brand
        self.price=price
    def send_sms(self,phone,sms):
        text =f'sending sms to: {phone} and message: {sms}'
        return text

my_phone = phone('Najmul','samsung',23423)
print(my_phone.owner,my_phone.brand,my_phone.price)
result = my_phone.send_sms(2345345,'i forgot to miss you')
print(result)
