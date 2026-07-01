#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void filin(int n, char** arr){
    for(int q=0; q<n; q++){
        arr[q]= (char*)malloc(21*sizeof(char));
    }
}
void copy(int n, char** arr, char** arr1){
    for(int q=0; q<n; q++){
        strncpy(arr[q],arr1[q],(strlen(arr1[q])+1));
    }
}
int main(){
    int rotn = 0;
    char** p1 = (char** ) malloc(rotn*sizeof(char*));
    char** spair = (char** ) malloc((rotn+1)*sizeof(char*));
    char str[21]="";
    printf("Enter a word(Enter 'end'to quit): ");
    scanf("%s",str);
    if(strcmp(str,"end")==0){

    }
    else{
        rotn++;
        p1 = (char** ) malloc(rotn*sizeof(char*));
        filin(rotn,p1);
        spair = (char** ) malloc((rotn+1)*sizeof(char*));
        filin(rotn+1,spair);
        strncpy(p1[0],str,strlen(str)+1);
        copy(rotn,spair,p1);
        while (1)
        {
            int flag =0;
            printf("Enter a word(Enter 'end'to quit): ");
            scanf("%s",str);
            if(strcmp(str,"end")==0){
                break;
            }
            for(int w=0; w<rotn; w++){
                if(strcmp(str,p1[w])==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1) printf("This word already exists. Please enter another word.\n");
            else{
                rotn++;
                strncpy(spair[rotn-1],str,strlen(str)+1);
                free(p1);
                p1=(char**) malloc(rotn*sizeof(char*));
                filin(rotn,p1);
                copy(rotn,p1,spair);
                free(spair);
                spair=(char**) malloc((rotn+1)*sizeof(char*));
                filin(rotn+1,spair);
                copy(rotn,spair,p1);
            }
        }
    }
    printf("%d\n",rotn);
    for(int t=0; t<rotn; t++){
        printf("%s ",p1[t]);
    }
    printf("\n");
    while (1)
    {
        int flag2 =0;
        printf("Enter a word to search(Enter 'end' to quit): ");
        scanf("%s",str);
        if(strcmp(str,"end")==0) break;
        for(int v=0; v<rotn; v++){
                if(strcmp(str,p1[v])==0){
                    flag2=1;
                    break;
                }
        }
        if(flag2==1){
            printf("This word is in the list.\n");
        }
        else{
            printf("This word is NOT in the list.\n");
        }

    }
    free(p1);
    free(spair);    
}