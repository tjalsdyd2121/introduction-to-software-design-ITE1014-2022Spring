#include <stdio.h>

void square(double *pa){
    *pa = ((*pa) *(*pa));
    
}

int main (){

    double a;
    scanf("%lf",&a);
    square(&a);
    printf("%lf",a);

    return 0;
}



