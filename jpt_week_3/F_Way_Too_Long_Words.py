q=int(input())
for i in range(q):
    s=input();
    if len(s)<=10:
        print(s)
    else:
        print(f'{s[0]}{len(s)-2}{s[-1]}')    