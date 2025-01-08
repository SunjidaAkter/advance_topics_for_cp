n,k=map(int,input().split())
a=list(map(int,input().split()))
a.sort(reverse=True)
sum=0
for i in range(len(a)):
    if a[i]>=0:    
        sum+=a[i]
    if i+1==k or a[i]<0:
        break
print(sum)
