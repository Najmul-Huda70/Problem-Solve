def palindrome(arr,n):
    for i in range(n//2):
        if arr[i] != arr[-i-1]:
            return False
    return True

n = int(input())
arr = list(map(int, input().split()))
if(palindrome(arr,n)):
    print("YES")
else:
    print("NO")