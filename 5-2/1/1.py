def printline(n):
    for i in range(1,n+1):
        print(end=str(i)+" ")
    
q=int(input())
for e in range(1,q+1):
    printline(e)
    print("")
for r in range(1,q+1):
    printline(1+q-r)
    print("")
