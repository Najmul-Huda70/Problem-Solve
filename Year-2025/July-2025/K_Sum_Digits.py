def sum(s):
    Total = 0
    for ch in s:
        Total+=int(ch)
    return Total
n =int(input())
s = input().strip()  
print(sum(s))
