#Najmul Huda
def solve():
    mod = 10**9 + 7
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    # Sorting
    a = sorted(a)
    b = sorted(b)
    
    # Validation check
    for i in range(n):
        if a[i] <= b[i]:
            return 0
    
    result = 1
    # Combinatorics
    for i in range(n):
        low = i
        high = n - 1
        idx = i - 1  # Initialize idx to handle cases where no b[mid] < a[i]
        while low <= high:
            mid = (low + high) // 2
            if b[mid] < a[i]:
                idx = mid
                low = mid + 1
            else:
                high = mid - 1
        result = (result * (idx - i + 1)) % mod
    
    return result

# Test cases
t = int(input())
for _ in range(t):
    print(int(solve()))