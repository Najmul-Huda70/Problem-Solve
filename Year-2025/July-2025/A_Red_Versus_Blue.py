#Najmul Huda
def solve():
    substring1="RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"
    substring2="BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
    str=""
    n,r,b =map(int,input().split()) # 10 8 2
    if r>b:
        k=int(b+1)
        div = r//k #minimum
        baki =r -(div*k)
        #print(f'div {div} baki {baki}')
        for i in range(baki):
            str+=substring1[:div+1]+"B"
            k-=1
        while k>1:
            str+=substring1[:div]+"B"
            k-=1
        str+=substring1[:div]
    elif b>r:
        k=int(r+1)
        div = b//k #minimum
        baki =b -(div*k)
        #print(f'div {div} baki {baki}')
        for i in range(baki):
            str+=substring2[:div+1]+"R"
            k-=1
        while k>1:
            str+=substring2[:div]+"R"
            k-=1
        str+=substring1[:div]
        
    else:
        div=n//2
        for i in range(div):
            str+="BR"
    print(str)




#testcase
t = int(input())
for _ in range(t):
    solve()