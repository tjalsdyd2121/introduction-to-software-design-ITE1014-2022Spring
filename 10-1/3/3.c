#include <stdio.h>

int main(void){
    char c[1001];
    int cou=0;
    scanf("%s",c);
    for(int i=0 ;1; i++){
        if(c[i]== '\0'){
            break;
        }
        else{
            cou++;
        }
    }
    printf("%d",sizeof(c)/sizeof(char));
    printf("%d",cou);


    return 0;
}