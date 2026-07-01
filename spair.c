#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char selectedLetter[5];
char* selectAnswer(const char** wordList){
    srand(time(NULL));
    int ran =(rand()%10);
    char* n =wordList[ran];
    return n;
}

char* getinputFromUser(){
    
    char* x =(char*) malloc(5*sizeof(char));
    while (1)
    {
        printf("enter a word\n");
        scanf("%s",x);
        if(strlen(x) != 5){
            printf("enter another word\n");
        }
        else{
            int check =0;
            for(int q=0; q<5;q++){
                if( ((int)x[q]< (int)'a') || ((int)x[q] > ((int)'z'))){
                    check=1;
                }
            }
            if(check){
                printf("enter another word");
            }
            else{
                break;
            }
        }
    }
    char* t =x;
    //free(*x);
    return t;
}

char* checkLetter(const char* inputLetter){
    char* k =(char*) malloc(5*sizeof(char));
    for(int w=0; w<5; w++){
        if(selectedLetter[w] == inputLetter[w]){
            k[w]='G';
        }
        else{
            int flag =0;
            for(int e=0; e<5;e++){
                if(selectedLetter[w]== inputLetter[e]){
                    flag=1;
                }
            }
            if(flag){
                k[w]='Y';
            }
            else{
                k[w] ='B';
            }
        }
    }
    return k;
}

int main(){
    printf("gmae start\n");
    const char* arr[]={"apple","bound","nasty","seven","world","piano","green","woman","dream","death"};
    strcpy(selectedLetter,selectAnswer(arr));
    int try = 6;
    int flag=0;
    while (try>0)
    {
        char* ans=(getinputFromUser());
        char* result= checkLetter(ans);
        printf("%s\n", result);
        if (strcmp(result,"GGGGG")==0)
        {
            flag=1;
            break;
            
        }
        else
        {
            try--;
        }
        if(flag) break;      
        
    }
    if(flag==0){
        printf("lose, %s",selectedLetter);
    }
    else{
        printf("win");
    }
    
}