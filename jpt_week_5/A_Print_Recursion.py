
def recur(n,i=0):
    if i==n:
        return
    print("I love Recursion")
    return recur(n,i+1)
n=int(input()) 
recur(n)