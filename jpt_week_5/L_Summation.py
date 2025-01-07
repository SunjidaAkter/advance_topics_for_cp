def recur(n,a,s=0,i=0):
    if n == 0:
        return s
    # print(s)
    return recur(n-1,a,s+a[i],i+1)

n=int(input())
a = list(map(int, input().split()))

print(recur(n,a))