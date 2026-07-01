list={}
for i in range(3):
    stuinfo=str(input())
    stuinfo1=stuinfo.split()
    list[stuinfo1[0]]=stuinfo1[1]

print("Which student's score?")
stuname=str(input())
if stuname in list:
    print(stuname+"'s score: "+list[stuname])
else:
    print(stuname+' is not in the database.')
