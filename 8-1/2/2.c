#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c && b>c){
        printf("max: %d\n",a);
        printf("min: %d",c);
    }
    else if (a>b && a>c && c>b){
        printf("max: %d\n",a);
        printf("min: %d",b);
    }
    else if (a>b && c>a && c>b){
        printf("max: %d\n",c);
        printf("min: %d",b);
    }
    else if (b>a && c>a && c>b){
        printf("max: %d\n",c);
        printf("min: %d",a);
    }
    else if (b>a && a>c && b>c){
        printf("max: %d\n",b);
        printf("min: %d",c);
    }
    else{
        printf("max: %d\n",b);
        printf("min: %d",a);

    }
    return 0;
}