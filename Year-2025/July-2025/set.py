# 3.3 Set and set methods in python
# set : unique items collection
# List --> []
# Tupple --> ()
# set --> {}f
number = [12,11,20,30,11,40]
print(number)
number_set = set(number)
print(number_set)

# set add
number_set.add(100)
print(number_set)

# set remove
number_set.remove(11)
print(number_set)

for item in number_set:
    print(item)
if 11 in number_set:
    print('11 exists')
elif 90 in number_set:
    print('90 exists')
else:
    print('Not exists')