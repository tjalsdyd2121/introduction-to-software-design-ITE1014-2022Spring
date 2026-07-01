#include <stdio.h>

void printString (const char* str){
    printf("%s\n",str);
}

int main (){

    const char* arr[]= {"One", "Two", "Three"};

    void (*fptr) (const char *) = printString;
    for(int q=0;q<3;q++){
        fptr(arr[q]);
    }

    return 0;
}