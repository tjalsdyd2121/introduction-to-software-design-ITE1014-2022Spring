#include <stdio.h>

int add(int a, int b){
    return a+b;

}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
double div(double a,double b){
    return (a/b);
}
int mod(int a, int b){
    return a%b;
}
int printMsg(void){
    printf("completed");
}
int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("sum: %d\n",add(a,b));
    printf("difference: %d\n",sub(a,b));
    printf("product: %d\n",mul(a,b));
    printf("division: %.15f\n",div(a,b));
    printf("remainder: %d\n",mod(a,b));
    printMsg();
    return 0;
}