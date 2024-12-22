n=int(input())
a=input().split()
x=int(input())
b=False
for i in range(0,len(a)):
    if int(a[i])==x:
        b=True
        y=i
        # break
# print(b)

if b==True:
    print(y)
else:
    print(-1)     