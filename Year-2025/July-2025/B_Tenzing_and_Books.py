#Najmul Huda
def make_prefix_array(arr):
    s=0
    newArray=[]
    newArray.append(s)
    for num in arr:
        if (s|num) !=s:
            s|=num
            newArray.append(s)
    return newArray
def solve():

    #input
    n,x=map(int,input().split())
    a =list(map(int,input().split()))
    b =list(map(int,input().split()))
    c =list(map(int,input().split()))

    #make prefix sum array 
    prefix=[]
    prefix.append(make_prefix_array(a))
    prefix.append(make_prefix_array(b))
    prefix.append(make_prefix_array(c))
    
    # find x prefix or oparation any way - T.C ~O(31^3)
    for A in prefix[0]:
        for B in prefix[1]:
            for C in prefix[2]:
                if (A|B|C==x):
                    return 'Yes'
    return 'No'
    
#Testcase
t=int(input())
for _ in range(t):
    print(solve())