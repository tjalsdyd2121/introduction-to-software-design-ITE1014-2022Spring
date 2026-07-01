#include<stdio.h>
int main (void){
    int a;
    scanf("%d",&a);
    if (a<-10){
        printf("n<10");
    }
    else if(a<0){
        printf("10<=n<0");
    }
    if (a>=10){
        printf("n>=10");
    }
    else{
        printf("0<=n<10");
    }
    return 0;
}