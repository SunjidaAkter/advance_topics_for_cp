s=input()
dict={}
for i in s:
    if i in dict:
        dict[i] += 1
    else:
        dict[i] = 1
for i in sorted(dict.keys()):
    print(f'{i} : {dict[i]}')        