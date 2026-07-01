#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int xpos;
    int ypos;
} Point;

int main(){
    Point* p1 =(Point*) malloc(sizeof(Point));
    scanf("%d %d", &p1->xpos,&p1->ypos);
    printf("%d %d", p1->xpos, p1->ypos);
    free(p1);
    


}
