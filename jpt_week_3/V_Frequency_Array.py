n,m=map(int,input().split())
a=list(map(int,input().split()))
# n=int(input())
# s=input()
v= [0]*(m+1)
for i in range(0,len(a)):
    v[a[i]]+=1
for i in range(0,len(v)):
    if v[i]!=0:
        print(v[i])