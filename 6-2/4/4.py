import random
print("Input the length of the string : ",end='')
leng=int(input())
print("How many times will the mouse eat : ",end='')
N=int(input())
def getRandomCheese(leng):
    global list
    list=[]
    global checkli
    checkli=[]
    global seperator
    seperator=''
    for i in range(1,leng+1):
        r=random.randint(97, 122)
        list.append(chr(r))
        checkli.append('_')
    global cheese
    cheese=seperator.join(list)
    return cheese 
print("Generated Cheese is '"+str(getRandomCheese(leng))+"'")
print("")
alphabet=''
alpha_list=[]
checklist=seperator.join(checkli)
for z in range(97,123):
    alpha_list.append(z)
cheese1=cheese
for j in range(1,N+1):
    q=1
    while q==1:
        q=random.choice(alpha_list)
    alpha_list[q-97]=1
    alphabet= alphabet+' '+chr(q)
    print("Start eating '"+chr(q)+"'")
    if checklist!=cheese1:
        print("Eaten alphabet of cheese : "+alphabet)
        print("Original Cheese is '"+cheese+"'")
        for p in range(0,leng):
            if list[p]==chr(q):
                list[p]='_'
        cheese1=seperator.join(list)
        print("Current cheese status : '"+str(cheese1)+"'")
        print("")
    else:
        break
if checklist==cheese1:
        print('Out of cheese!')
if checklist!=cheese1:
    print("Finally remained Cheese Status :")
    print("Eaten alphabet of cheese : "+alphabet)
    print("Original Cheese is '"+cheese+"'")
    print("Current cheese status : '"+str(cheese1)+"'")