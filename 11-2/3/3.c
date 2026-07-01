#include <stdio.h>
#include <string.h>



int in(char a,char b[]){
    int check=0;
    if(a==b[0]) check=1;
    for(int e=1;e<strlen(b);e++){
        if(a== b[e]) check=1;
    }
    if(check==1) return 1;
    else return 0;
}

int count(char u,char i[]){
    int check1=0;
    if(i[0]==u) check1++;
    for(int r=1;r<strlen(i);r++){
        if(i[r]==u) check1++;
    }
    return check1;
}

int main(void){
    char c[10];
    char c_list[10];

    
    scanf("%s",c);
    c_list[0]=c[0];
    for(int q=1; q<strlen(c);q++){
        if (in(c[q],c_list)==0){
            c_list[q] = c[q];
        }
    }
    for(int r=0;r<10;r++){
        
        if (c[r] == c_list[r]){
            if(c_list[r] !='\0') printf("\'%c\' : %d\n",c_list[r],count(c_list[r],c));
        }
    }
    return 0;
}