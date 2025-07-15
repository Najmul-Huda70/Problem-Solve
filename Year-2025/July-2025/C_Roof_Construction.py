#Najmul Huda

def solve():
    N =int(input())
    n=N-1
    #msb find
    x=1
    while x<<1 <= n:
        x=x<<1
    
    i=x-1
    while i>=0:
        print(i,end=' ')
        i-=1
    while x <= n:
        print(x,end=' ')
        x+=1
    print()


# testcase
t=int(input())
for _ in range(t):
    solve()