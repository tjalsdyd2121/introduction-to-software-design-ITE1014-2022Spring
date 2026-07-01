#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void filin(int n, char** arr){
    for(int q=0; q<n; q++){
        arr[q]= (char*)malloc(n*sizeof(char));
    }
}
void copy(int n, char** arr, char** arr1){
    for(int q=0; q<n; q++){
        strncpy(arr[q],arr1[q],strlen(arr1[q]));
    }
}
int main(){
    int rotn = 0;
    char** p1 = (char** ) malloc(rotn*sizeof(char));
    char str[21]="";
    scanf("%s",str);
    if(strcmp(str,"end")==0){

    }
    else{
        rotn++;
        p1 = (char** ) malloc(rotn*sizeof(char));
        filin(rotn,p1);
        char** spair = (char** ) malloc((rotn+1)*sizeof(char));
        filin(rotn+1,spair);
        strncpy(p1[0],str,strlen(str));
        copy(rotn,spair,p1);
        while (1)
        {
            int flag =0;
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
            if(flag==1) printf("enter another word\n");
            else{
                rotn++;
                strncpy(spair[rotn-1],str,strlen(str));
                p1=(char**) malloc(rotn*sizeof(char));
                filin(rotn,p1);
                copy(rotn,p1,spair);
                spair=(char**) malloc((rotn+1)*sizeof(char));
                filin(rotn+1,spair);
                copy(rotn,spair,p1);
            }
        }
    }
    printf("%d\n",rotn);
    for(int t=0; t<rotn; t++){
        printf("%s ",p1[t]);
    }


}
    