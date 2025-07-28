

#Najmul Huda
def solve():

    n, a, b = map(int, input().split())
    ok = True
    if a + b >= n - 1:
        ok = (a == n and b == n)
    print("Yes" if ok else "No")

#Testcase
t=int(input())
for _ in range(t):
    solve()