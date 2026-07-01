#include <stdio.h>
int main(){
    int n;
    int t=1;
    scanf("%d",&n);
    while(t<=9){
        int k=t*n;
        printf("%d*%d=%d\n",n,t,k);
        t++;
    }
    return 0;
}