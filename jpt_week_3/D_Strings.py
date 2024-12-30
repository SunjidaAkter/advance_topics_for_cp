s=input()
t=input()
print(f'{len(s)} {len(t)}')
print(f'{s}{t}')
print(t[0],end="")
for i in range(1,len(s)):
    print(s[i],end="")
print(" ", end="")    
print(s[0],end="")
for i in range(1,len(t)):
    print(t[i],end="")
