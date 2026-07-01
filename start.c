#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char e[]="qwr";
    char f[]="qrte";
    char* a= strcpy(e,f);
    printf("%s ",a);
}