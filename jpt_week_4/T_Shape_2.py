n=int(input())
j=0
l=1
k=n-1
for i in range(n):
    for kk in range(k):
        print(" ",end="")
    k-=1    
    for ll in range(2*l-1):
        print("*",end="")
    l+=1
    print()