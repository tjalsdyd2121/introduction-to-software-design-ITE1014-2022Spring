#include <stdio.h>

void printArray(const char* ary[]){
    printf("Array: ");
    printf("[0] : %s,",(ary[0]));
    printf(" [1] : %s,\n",(ary[1]));
}

void swap(const char** a, const char** b){
    const char* c= *a;
    *a = *b;
    *b = c;
}

int main (){
    const char* arry[]= {"aaa", "bbb"};
    printArray(arry);
    swap(&arry[0],&arry[1]);
    printArray(arry);
}