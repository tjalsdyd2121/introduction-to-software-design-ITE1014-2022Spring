def printStarDia(n):

    for q in range(1,n+1):
        for w in range(1,n-q+1):
            print(" ", end="")
        for e in range(1,q+1):
            print("* ", end="")
        print()
    for r in range(n, 0, -1):
        for t in range(n-r+1,1,-1):
            print(" ", end="")
        for y in range(r+1,1,-1):
            print("* ", end="")
        print()
        

n=int(input())
printStarDia(n)