#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void filin(int n, char** arr){
    for(int q=0; q<n; q++){
        arr[q]= (char*)malloc(n*sizeof(char));
    }

}
int main(){
    int rotn = 0;
    char str[21]="";
    scanf("%s",str);
    if(strcmp(str,"end")==0){

    }
    else{
        rotn++;
        char** p1 = (char** ) malloc(rotn*sizeof(char));
        filin(rotn,p1);
        char** spair = (char** ) malloc((rotn+1)*sizeof(char));
        filin(rotn+1,spair);
        strncpy(p1[rotn-1],str,strlen(str));
        strncpy(spair[rotn-1],str,strlen(str));
        strncpy(spair[rotn],str,strlen(str));
        printf("%s %s %s ",p1[0],spair[1],spair[0]);






    }


}

/*int main(){
    int n=0;
    char** point = (char**) malloc((n+1)*sizeof(char*));
    char** spair = (char**) malloc((n+2)*sizeof(char*));
    point[0]=(char* ) malloc(21*sizeof(char));
    spair[0]=(char* ) malloc(21*sizeof(char));
    spair[1]=(char* ) malloc(21*sizeof(char));
    scanf("%s",point[0]);
    char str[21]="char";
    printf("%d",strcmp(point[0],str));

    spair[0]=point[0];
    scanf("%s",spair[1]);
    point = (char**) malloc((n+2)*sizeof(char*));
    point[0]=spair[0];
    //strncpy(spair[1],str,strlen(str));
    point[1]=spair[1];
    printf("%s %s",point[0],point[1]);

}*/