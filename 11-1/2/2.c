#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char a[11];
    scanf("%s",a);
    for(int q=0;q<strlen(a);q++){
        char* ww = &(a[q]);
        if(toupper(a[q]) == a[q]) *ww = tolower(a[q]);
        else *ww= toupper(a[q]);
    }
    printf("%s",a);
    return 0;
}