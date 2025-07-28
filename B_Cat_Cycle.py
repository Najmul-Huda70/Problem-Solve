#Najmul Huda
def solve():
    n,k=map(int,input().split())
    if n%2==0:
        if k%n==0:
            print(n)
        else:
            print(k%n)
    else:
        skip_Time=n//2
        skip=k//skip_Time
        if k%skip_Time==0:
            skip-=1
        k+=skip
        if k%n==0:
            print(n)
        else:
            print(k%n)

    
    
#Testcase
t=int(input())
for _ in range(t):
    solve()