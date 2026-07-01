#include <stdio.h>

int printLine(int n){
    for(int q=1;q<=n;q++){
        printf("%d ",q);
    }

}
int main(void){
    int n;
    scanf("%d",&n);
    for(int w=1;w<=n;w++){
        printLine(w);
        printf("\n");

    }
    for(int e=n;e>=1;e--){
        printLine(e);
        printf("\n");

    }
    return 0;
}