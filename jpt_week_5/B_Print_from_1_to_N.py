def recur(n,i=1):
    if i==n+1:    
        return
    print(i)
    return recur(n,i+1)
n=int(input())
recur(n)