#Najmul Huda
def possible(w,n,C,arr):
    total = 0
    for i in range(n):
        side = (2 * w) + arr[i]
        area = side * side
        total += area
        if total > C:
            return False
    return True
def solve():
    n, C = map(int, input().split())
    arr = list(map(int, input().split()))
    
    # Binary search
    low = 0
    high = int(1e10)
    ans = 0
    
    while low <= high:
        mid = low + (high - low) // 2
        if possible(mid,n,C,arr):
            ans = mid
            low = mid + 1
        else:
            high = mid - 1
    
    print(ans)

#testcase
t = int(input())
for _ in range(t):
    solve()