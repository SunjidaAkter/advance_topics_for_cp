x,y,k=map(int,input().split())
if x%k==0 and y%k==0:
    print("Both")
elif x%k==0:
    print("Memo")
elif y%k==0:
    print("Momo")
else:
    print("No One")    