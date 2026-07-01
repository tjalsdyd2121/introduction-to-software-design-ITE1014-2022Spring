#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
const char* convert(const char* str){
    char a [sizeof(str)/sizeof(char)];
    for(int q=0; q<(sizeof(str)/sizeof(char)); q++){
        if(isupper(str[q])!=0) a[q] = tolower(str[q]);
        if(islower(str[q]) !=0) a[q] = toupper(str[q]);
    } 
    return (a);
}
int main(){
    printf("%s",convert("EWRQFgsad"));
}