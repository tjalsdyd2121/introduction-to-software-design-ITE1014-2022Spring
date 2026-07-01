#include <stdio.h>

int main(void){
    int i;
    double d;
    char c;
    scanf("%d %lf %c",&i ,&d ,&c);
    printf("i : %d, %p\n",i,&i);
    printf("d : %lf, %p\n",d,&d);
    printf("c : %c, %p\n",c,&c);
    int* pi=&i;
    double* pd=&d;
    char* pc= &c;
    *pi +=1;
    *pd +=1;
    *pc +=1;
    printf("i+1 : %d\n",i);
    printf("d+1 : %lf\n",d);
    printf("c+1 : %c\n",c);
    printf("size of pi: %llu\n", sizeof(pi));
    printf("size of pi: %llu\n", sizeof(pd));
    printf("size of pi: %llu\n", sizeof(pc));


    return 0;
}