a=int(input())
b=str('*')
c=int(1)
d=int(1)
while c<a+1:
    d=int(1)
    while d<c+1:
        print(b,end=' ')
        d+=1
    c+=1
    print('')    
    