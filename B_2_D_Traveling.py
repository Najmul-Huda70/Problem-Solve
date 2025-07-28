#Najmul Huda
def solve():
    n,k,a,b=map(int,input().split())
    arr =[]
    for i in range(n):
        x,y=map(int,input().split())
        arr.append([x,y])
    direct_cost =abs(arr[a-1][0]-arr[b-1][0]) + abs(arr[a-1][1]-arr[b-1][1])
    min1=1e18
    min2=1e18
    for i in range(k):
        min1 =min(min1,abs(arr[a-1][0]-arr[i][0]) + abs(arr[a-1][1]-arr[i][1]) )
        min2 =min(min2,abs(arr[i][0]-arr[b-1][0]) + abs(arr[i][1]-arr[b-1][1]) )
    m_cost=min1+min2
    print(min(m_cost,direct_cost))

    
    
#Testcase
t=int(input())
for _ in range(t):
    solve()