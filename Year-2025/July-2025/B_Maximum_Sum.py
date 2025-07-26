#Najmul Huda
def solve():
    n, kk = map(int, input().split())
    arr = list(map(int, input().split()))
    arr = sorted(arr)
    Total_sum=sum(arr)
    # Sum of consecutive pairs
    sum_pair = []
    i = 0
    while i + 1 < min(n,2*kk):
        sum_pair.append(arr[i] + arr[i + 1])
        i += 2
    
    # Cumulative sum of pair sums
    mincumsum_op = []
    total = 0
    for s in sum_pair:
        total += s
        mincumsum_op.append(total)
    #Cumulative sum last to k element
    maxcumsum_op=[]
    total=0
    i=n-1
    while i>=(n-kk):
        total+=arr[i]
        maxcumsum_op.append(total)
        i-=1
    
    
    #print(sum_pair)
    # print(mincumsum_op)
    # print(maxcumsum_op)
    sm=1e18
    for i in range(kk+1):
        if i==0:
            sm=min(sm,maxcumsum_op[kk-1])
        elif i==kk:
            sm=min(sm,mincumsum_op[i-1])
        else:
            sm=min(sm,mincumsum_op[i-1]+maxcumsum_op[kk-1-i] )       
    print(Total_sum-sm)

   
# Test cases
t = int(input())
for _ in range(t):
    solve()