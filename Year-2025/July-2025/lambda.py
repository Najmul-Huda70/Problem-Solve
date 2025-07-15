# def doubled(x):
#     return x*2
# result =doubled(44)
# print(result)
doubled = lambda num : num*2
# result =doubled(40)
# print(result)
# add = lambda a,b: a+b 
# sum =add(5,10)
# print(sum)

# numbers = [1,2,3,4,5,6,7,8,9,10]
# doubled_nums = map(doubled,numbers)
# print(list(numbers))
# print(list(doubled_nums))


numbers = [1,2,3,4,5,6,7,8,9,10]
doubled_nums = map(lambda x:x*2,numbers)
print(list(numbers))
print(list(doubled_nums))