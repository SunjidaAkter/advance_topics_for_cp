def recur(n):
    if n==1:    
        return
    print(n,end=" ")
    return recur(n-1)
n=int(input())
recur(n)
print(1)