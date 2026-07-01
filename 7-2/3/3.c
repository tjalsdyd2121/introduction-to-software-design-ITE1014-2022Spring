#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int q=1;q<=n;q++){
        for(int w=1;w<=q;w++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}