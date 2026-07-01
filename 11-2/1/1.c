#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char c[11];
    scanf("%s",c);
    int check=0;
    if(strlen(c)%2 ==0){
        for(int q=0;q<(strlen(c)/2);q++){
            if((c[q]) != (c[(strlen(c))-q-1])) check=1;
        }
        if (check==1) printf("This is not a Pailndrom");
        else printf("This is a Pailndrom");
    }
    else {
        for(int w=0;w<(strlen(c)-1)/2;w++){
            if((c[w]) != (c[((strlen(c)-1))-w])) check=1;
        }
        if (check==1) printf("This is not a Pailndrom");
        else printf("This is a Pailndrom");
    }

    return 0;
}