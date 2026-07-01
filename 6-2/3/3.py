sentence=str(input())
list={}
sentence1=sentence.split()
for i in range(len(sentence1)):
    count=0
    word=sentence1[i]
    for j in range(len(sentence1)):
        if sentence1[i]==sentence1[j]:
            count+=1
    if (word in list) is False:
        list[word]=count
        print(str(word)+" : "+str(count))



    

