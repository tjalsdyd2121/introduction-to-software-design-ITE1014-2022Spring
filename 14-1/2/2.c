#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* p1 = (int*)malloc(n*sizeof(int));
    scanf("%d",&n);
    int max,min;
    for(int q=0; q<n; q++){
        int g;
        scanf("%d",&g);
        if(q==0) max = g, min =g;
        *(p1+q) = g;
        if(*(p1+q) >= max) max = *(p1+q);
        if(*(p1+q) <= min) min = *(p1+q);
    }
    printf("min : %d\n", min);
    printf("max : %d", max);
    free(p1);
}