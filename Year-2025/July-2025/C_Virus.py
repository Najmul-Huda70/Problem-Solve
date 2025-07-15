#  Najmul Huda
# Problem : virus Ratings: 1200
def solve():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()

    # Step 1: Find all uninfected segments (dist) between infected houses
    dist = []
    for i in range(m):
        next_i = (i + 1) % m
        if next_i == 0:
            gap = (n - arr[i]) + (arr[0] - 1)
        else:
            gap = arr[next_i] - arr[i] - 1
        if gap > 0:
            dist.append(gap)

    
    dist.sort(reverse=True)

    protected = 0
    infacted = 0  

    for g in dist:
        sz = g - 2 * infacted
        if sz > 2:
            protected += sz - 1
            infacted += 2
        elif sz == 2 or sz == 1:
            protected += 1
            infacted += 1
        
    print(n - protected)


T = int(input())
for _ in range(T):
    solve()
