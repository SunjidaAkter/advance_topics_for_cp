n=int(input())
a=input().split()
for i in range(0,len(a)):
    if int(a[i])<0:
        a[i]=2
    elif int(a[i])>0:
        a[i]=1
    else:
        continue
print(*a)
    