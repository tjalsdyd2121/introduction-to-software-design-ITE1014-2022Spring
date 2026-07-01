#include <stdio.h>

int main(void){
    int ary[5];
    scanf("%d %d %d %d %d",&(*ary),&*(ary+1),&*(ary+2),&*(ary+3),&*(ary+4));
    int qwe1= *ary;
    int qwe2= *(ary+1);
    *ary=*(ary+4);
    *(ary+1)=*(ary+3);
    *(ary+3)=qwe2;
    *(ary+4)=qwe1;
    printf("%d %d %d %d %d",(*ary),*(ary+1),*(ary+2),*(ary+3),*(ary+4));



    return 0;
}