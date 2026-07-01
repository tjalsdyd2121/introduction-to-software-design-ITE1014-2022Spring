#include <stdio.h>

int fo(int n ,int r){
    if(r==0) return 1;
    if(n==0) return 0;
    return (fo(n-1,r-1)+ fo(n-1,r));

}
int main(void){
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%d",fo(n,r));
    return 0;
}