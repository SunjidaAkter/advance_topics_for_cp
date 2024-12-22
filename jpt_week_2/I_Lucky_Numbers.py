a,b=map(int,input())
if b==0:
    print("YES")
elif a%b==0 or b%a==0:
    print("YES")
else:
    print("NO")    