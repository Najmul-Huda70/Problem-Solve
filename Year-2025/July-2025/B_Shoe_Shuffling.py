from collections import Counter

def rotate(arr, left, mid, right):
    segment = arr[left:right]
    k = mid - left  
    rotated = segment[k:] + segment[:k]
    arr[left:right] = rotated
    return arr

def solve():
    n = int(input())
    s = list(map(int, input().split()))
    
   
    freq = Counter(s)
    flag = False
    for count in freq.values():
        if count == 1:
            flag = True
            break
    
    if flag:
        print(-1)
        return
    
    ans = list(range(1, n + 1))
    
    
    l = 0
    r = 0
    while r < n:
        if r + 1 < n and s[l] == s[r + 1]:
            r += 1
        else:
            
            if r > l:  
                ans = rotate(ans, l, l + 1, r + 1)
            l = r + 1
            r = l
    
    
    print(' '.join(map(str, ans)))


t = int(input())
for _ in range(t):
    solve()