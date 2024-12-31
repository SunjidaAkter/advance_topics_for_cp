n=int(input())
j=n
for i in range(n):
    for k in range(j):
        print('*', end='')
    j-=1
    print()