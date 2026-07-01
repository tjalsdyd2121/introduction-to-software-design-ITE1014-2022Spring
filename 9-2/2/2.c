#include <stdio.h>
int gMul=1;

int addTotal(n){
    int k=0;
    for(int i=1;i<=n;i++){
        k+=i;

    }
    return k;
}

int mulTotal(n){
    for(int q=1;q<=n;q++){
        gMul*=q;
    }

}
int main(void){
    int n;
    scanf("%d",&n);
    mulTotal(n);
    printf("addTotal():%d\n",addTotal(n));
    printf("gMul: %d",gMul);

    return 0;
}