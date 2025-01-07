n,m=map(int,input().split())
# m=int(input())
a=[]
for i in range(n):
    a.append(list(map(int, input().split())))
x=int(input())
ok=0
for i in range(n):
    for j in range(m):
        if a[i][j] == x:
            ok=1
if ok == 0:
    print("will take number")
else:
    print("will not take number")    