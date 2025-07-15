#Najmul Huda
#Problem:B. Luke is a Foodie
#Ratings:1000

"""
Problem solution :
1. consume compulsory from left to right
2. |v-ai|<= x condition true
this condition True :
    -x<=v-ai<=x
  =>ai-x<=v<=ai+x
3. v is currect ai-x<=v<=ai+x
"""
def solve():
    n,x=map(int,input().split())
    arr =list(map(int,input().split()))
    pair=[]
    for ai in arr:
        pair.append((ai-x,ai+x))
    
    #print(pair)
    l=0
    r=10e9+10
    ans=0
    for left,right in pair:
        l=max(l,left)
        r=min(r,right)
        if l>r:
            ans+=1
            l=left
            r=right
    print(ans)



#testcase run
T =int(input())
for _ in range(T):
    solve()