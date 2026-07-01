#include <stdio.h>

int main(void){
    double ary[5];
    scanf("%lf %lf %lf %lf %lf",&(*ary),&*(ary+1),&*(ary+2),&*(ary+3),&*(ary+4));
    double* parr= ary;
    double sum=0;
    for(int q=0;q<=4;q++){
        *(parr+q) *= 2;
        printf("%lf\n",*(parr+q));
        sum += *(parr+q);
    }
    printf("sum: %lf",sum);



    return 0;
}