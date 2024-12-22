n=int(input())
a = list(map(int, input().split()))
mn = float('inf') 
x = -1
for i in range(n):
    if mn>a[i]:
        mn=a[i]
        x=i+1
print(f'{mn} {x}')
