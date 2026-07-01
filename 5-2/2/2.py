def problemDescription():
    print("* Number od divisors *")
def getNumOfDivisors(number):
    global p
    p=int(0)
    for q in range(1,number+1):
        if number%q==0:
            p+=1
    return p

problemDescription()
print("Type the first number")
n1=int(input())
print("Type the second number")
n2=int(input())
print("Number of divisors of the first number is "+str(getNumOfDivisors(n1)))
print("Number of divisors of the second number is "+str(getNumOfDivisors(n2)))
