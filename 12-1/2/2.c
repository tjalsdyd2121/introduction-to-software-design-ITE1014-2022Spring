#include<stdio.h>


struct oh
{
    char name [11];
    int age;
};


int main (){
    struct oh pile;
    scanf("%s",pile.name);
    scanf("%d",&pile.age);
    printf("name : %s\n",pile.name);
    printf("age : %d",pile.age);
    
    return 0;
}