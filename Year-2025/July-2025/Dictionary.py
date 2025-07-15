numbers =[12,56,98,78,56,12,26,98]
for i,num in enumerate(numbers):
    print(i,num)
person1 =['Kala Chan',23,'Student']
#key value pair
#dictionary
#object
#hash table
#overlap with set
person ={'name':'Najmul Huda','Age':23,'Job':'Bekar'}
print(person)

print(person['Job'])
# key view
# del person['Age']
print(person.keys())
# dict_keys(['name', 'Age', 'Job'])
person['Language'] ='Python'
print(person)
# Special dictionary looping 
for key,value in person.items():
    print(key,' : ',value)