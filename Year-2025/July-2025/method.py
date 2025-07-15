class phone:
    price = 14500
    color = 'blue'
    brand ='samsung'
    features = ['camera','speaker','hammer']

    def call(self):
        print('calling one person')
    def send_sms(self,phone,sms):
        text =f'sending sms to: {phone} and message: {sms}'
        return text

my_phone = phone()
print(my_phone)
print('price',my_phone.price)
print('features :',my_phone.features)
result = my_phone.send_sms(2345345,'i forgot to miss you')
print(result)
