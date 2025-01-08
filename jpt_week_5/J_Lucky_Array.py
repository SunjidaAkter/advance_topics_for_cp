n=int(input())
a=list(map(int,input().split()))
x=min(a)
cnt=0
# print(x)
for i in range(n):
    if a[i]==x:
        cnt += 1
if cnt%2==0:
    print("Unlucky")
else :
    print("Lucky")        