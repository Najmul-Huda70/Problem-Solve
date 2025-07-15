#Najmul Huda

def solve():
    n,x=map(int,input().split())
    arr =list(map(int,input().split()))
    total_sum =sum(arr)

    arr=sorted(arr) # worstcase = O(nlogn) same merge sort
    #key,value
    mp ={}
    for val in arr:
        if val in mp:
            mp[val]+=1
        else:
            mp[val]=1
    #sorted unique value
    unique_val =list(mp.keys())
    ln = len(unique_val)
    #print(unique_val)
    # print(arr)
    # print(mp)
    # mx=max(mp.keys())
    # print(mx)
    increase =0
    buy_pack_cnt =0
    k=n
    while len(mp)>0:
        mn =unique_val[0]
        if mn>x:
            print(buy_pack_cnt)
            return
        while total_sum>x:
            mx = unique_val[-1]
            total_sum=total_sum-mx-increase
            mp[mx]-=1
            if mp[mx]<=0:
                del mp[mx]
                del unique_val[-1]
            k-=1
        
        buy_pack_cnt+=k
        partokko = x-total_sum
        distribute=0
        if k>0:
            distribute =partokko//k
        buy_pack_cnt+=k*distribute
        # print('buy_pack_cnt : ',buy_pack_cnt,' k: ',k)
        increase+=1+distribute
        total_sum+=k + k*distribute
        # print('total_sum : ',total_sum)
    print(buy_pack_cnt)



# testcase
t=int(input())
for _ in range(t):
    solve()