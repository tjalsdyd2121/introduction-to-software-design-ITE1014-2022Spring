#include <stdio.h>


void getSumDiff(int a, int b, int* pSum, int *pDiff){
    *pSum = (a+b);
    *pDiff = (a-b);

}
int main (){

    int sum;
    int diff;
    int p,q;
    scanf("%d %d",&p, &q );
    getSumDiff(p,q,&sum,&diff);
    printf("sum : %d\n",sum);
    printf("diff : %d",diff);
    return 0;
}