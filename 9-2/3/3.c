#include <stdio.h>

int r(int n){
    if (n==0){
        return 0;
    }
    
    return n + r(n-1);

}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",r(n));
    return 0;
}