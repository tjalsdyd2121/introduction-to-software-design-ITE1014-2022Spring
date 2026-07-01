


n=int(input())
c=int(1)
def a2(t):
    if t%2==0:
        print(t)
def a3(t):
    if t%3==0:
        print(t)
def a6(t):
    if t%6==0:
        return 0
    else:
        return 1
for t in range(1,n+1):
    if a6(t)==0:
        print(t)
    else:
        a3(t)
        a2(t)

