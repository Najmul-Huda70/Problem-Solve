#Najmul Huda 
n,q =map(int,input().split())
arr = list(map(int,input().split()))
key_val = {}
for i, val in enumerate(arr):
    key_val[i] = val
#print(key_val)
Total_sum=sum(arr)
#print(Total_sum)
for _ in range(q):
    op=list(map(int,input().split()))
    if op[0]==1:
        idx=op[1]
        val=op[2]
        # index 0
        idx-=1
        if key_val.get(idx)==None:
            Total_sum-=key_val["previous value"]
            key_val[idx]=val
        else:
            Total_sum-=key_val[idx] # previous val
            key_val[idx]=val # update value
        Total_sum+=val
    elif op[0]==2:
        val =op[1]
        Total_sum=val*n
        key_val.clear()
        key_val["previous value"]=val
    #print(arr)
    print(Total_sum)



