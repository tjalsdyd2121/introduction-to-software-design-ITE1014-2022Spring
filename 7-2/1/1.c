#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int t=1;t<=9;t++){
        int k=t*n;
        printf("%d*%d=%d\n",n,t,k);

    }
    return 0;
}