#Najmul Huda
def solve():
    n = int(input())
    v = list(map(int, input().split()))
    one = 0
    P = 0
    for x in v:
        if x > 0:
            one += 1
        else:
            P += 1
    if P > one:
        v.sort()
        cnt = 0
        while True:
            if one >= P and P % 2 == 0:
                break
            cnt += 1
            P -= 1
            one += 1
        print(cnt)
    elif P <= one and P % 2 != 0:
        print(1)
    else:
        print(0)    
    
#Testcase
t=int(input())
for _ in range(t):
    solve()