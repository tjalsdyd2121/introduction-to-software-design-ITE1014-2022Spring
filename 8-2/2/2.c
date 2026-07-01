#include <stdio.h>

int main(void){
    char a;
    scanf(" %c",&a);
    while (1){
        if (a>=65 && a<=90){
            a+=32;
            printf("%c\n",a);

        }
        else if(a>=97 && a<=122){
            a-=32;
            printf("%c\n",a);
        }
        else if (a>=48 && a<=57){
            printf("%c\n",a);
        }
        else{
            printf("exit");
            break;
        }
        scanf(" %c",&a);


    }

    
    return 0;
}