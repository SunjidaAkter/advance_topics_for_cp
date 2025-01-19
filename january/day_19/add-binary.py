
def addBinary(a, b):
    x=int(a,2)
    y=int(b,2)
    s=x+y
    return bin(s)[2:]
x,y=map(str,input().split( ))
print(addBinary(x,y))