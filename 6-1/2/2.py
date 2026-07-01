dict={}
for i in range(4):
    list = []
    for w in range(9):
        list.append(2*(i+1)*(w+1))
    dict[2*(i+1)]=list

print(dict)

 