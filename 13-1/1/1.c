#include <stdio.h>

#define PI 3.141592

int main (){
    double r;
    scanf("%lf", &r);
    printf("Perimeter : %lf\n", (2*PI*r));
    printf("Area : %lf", (PI*r*r));
    return 0;
}