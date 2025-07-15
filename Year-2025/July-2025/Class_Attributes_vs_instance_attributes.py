class Shop:
    cart =[] # cart is a class attribute

    def __init__(self,buyer):
        self.buyer=buyer
    def add_to_cart(self,item):
        self.cart.append(item)

mehjabeen = Shop('Meh jabeeen')
mehjabeen.add_to_cart('shoes')
mehjabeen.add_to_cart('pant')
mehjabeen.add_to_cart('pajama')
print(mehjabeen.cart)

dipjol = Shop('dipjol')
dipjol.add_to_cart('cap')
dipjol.add_to_cart('under pant')
dipjol.add_to_cart('longi')
print(dipjol.cart)