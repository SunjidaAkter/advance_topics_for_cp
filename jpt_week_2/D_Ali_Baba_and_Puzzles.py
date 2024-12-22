a,b,c,res=map(int,input().split())
if a+b*c==res or a+b-c==res or a-b+c==res or a-b*c==res or a*b-c==res or a*b+c==res :
    print("YES") 
else:
    print("NO")    