n=int(input())
a=list(map(int,input().split()))
mn_idx=a.index(min(a))
mx_idx=a.index(max(a))
a[mn_idx],a[mx_idx]=a[mx_idx],a[mn_idx]
print(*a)