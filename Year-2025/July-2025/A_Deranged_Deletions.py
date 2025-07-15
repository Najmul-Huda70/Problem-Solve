#Najmul Huda
#python 
def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            print("YES")
            print(2)
            print(arr[i], arr[i + 1])
            return
    print("NO")

T = int(input())
for _ in range(T):
    solve()