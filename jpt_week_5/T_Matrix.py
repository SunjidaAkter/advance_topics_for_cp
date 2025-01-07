n=int(input())
a=[]
s1=0
s2=0
for i in range(n):
    a.append(list(map(int, input().split())))
for i in range(n):
    for j in range(n):
        if i == j:
            s1 += a[i][j]
            s2+= a[i][n-1-j]
print(abs(s1 - s2))            