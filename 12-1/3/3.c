#include <stdio.h>

void getScale2xPoint(int* pq , int* qp){
    *pq *= 2;
    *qp *= 2;
}

typedef struct 
{
  int a;
  int b;

} Point;

int main(){
    Point ui;
    scanf("%d %d",&ui.a, &ui.b);
    getScale2xPoint(&ui.a,&ui.b);
    printf("%d %d", ui.a ,ui.b);
    
    return 0;
}