#include <stdio.h>
int bigger(int a,int b){
    if(a>b) return a;
    else return b;
}
int smaller(int a,int b){
    if(a>b) return b;
    else return a;
}
int main(void){
    int ary[5];
    scanf("%d %d %d %d %d",&ary[0],&ary[1],&ary[2],&ary[3],&ary[4]);
    int max= ary[0];
    int min =ary[0];
    int sum=ary[0];
    for(int q=0;q<=3;q++){
        max=bigger(max,ary[q+1]);
        min=smaller(min,ary[q+1]);
        sum+=ary[q+1];
    }
    printf("min = %d\n",min);
    printf("max = %d\n",max);
    printf("sum= %d\n",sum);

    return 0;
}