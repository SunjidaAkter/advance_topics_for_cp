n=int(input())
a=input().split()
for i in range(0,n):
    if int(a[i])<10:
        print(f'A[{i}] = {a[i]}')