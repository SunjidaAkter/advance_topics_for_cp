s=input()
for i in range(0,len(s)):
    if s[i] == ',':
        print(" ", end='')
    elif s[i].islower():
        print(s[i].upper(), end='')
    elif s[i].isupper():
        print(s[i].lower(), end='')