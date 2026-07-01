n=int(input())
def addTotal(n):
    sum=int(0)
    for t in range(1,n+1):
        sum = sum+t
    return sum
def mulTotal(n):
    global gMul
    gMul=int(1)
    for k in range(1,n+1):
        gMul=gMul*k

mulTotal(n)
print("addTotal(): "+str(addTotal(n)))
print("gMul: "+str(gMul))
