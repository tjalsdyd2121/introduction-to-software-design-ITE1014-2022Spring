import random


list=[]
for i in range(100):
    k=random.randint(1,1001)
    list.append(k)
    print(k,end=' ')


def findMax(ls):
    max=0
    for j in ls:
        if j >= max:
            max=j
    return max
def findMin(ls):
    min=1001
    for t in ls:
        if t <= min:
            min=t
    return min
print("")
print("")
print('max value: '+str(findMax(list)))
print("")
print('min value: '+str(findMin(list)))