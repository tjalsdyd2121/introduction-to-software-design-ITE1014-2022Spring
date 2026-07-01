#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct 
{
    char name [7];
    int score;

} Person;
void printScoreStars(Person* persons, int len){
    for(int w=0;w<len;w++){
        printf("%s ",persons[w].name);
        while (persons[w].score > 4)
        {
            persons[w].score -= 5;
            printf("*");
        }
        printf("\n");
    }
}
void copy(int n, Person* copying, Person* copied){
    for(int q=0; q<n; q++){
        strncpy(copying[q].name,copied[q].name,(strlen(copied[q].name)+1));
        copying[q].score = copied[q].score;
    }
}
int main(){
    int rotn =0;
    int scoree;
    char namee[7];
    Person* point1 = (Person* )malloc((rotn)*sizeof(Person));
    Person* spair = (Person* )malloc((rotn+1)*sizeof(Person));
    scanf("%s %d",namee, &scoree);
    if((!strcmp(namee,"END")) || (scoree==0)){}
    else{
        rotn++;
        point1 = (Person* )malloc((rotn)*sizeof(Person));
        spair = (Person* )malloc((rotn+1)*sizeof(Person));
        strncpy(point1[0].name,namee,(strlen(namee)+1));
        point1[0].score = scoree;
        copy(rotn,spair,point1);
        while (1)
        {
            scanf("%s %d",namee,&scoree);
            if((!strcmp(namee,"END")) || (scoree==0)) break;
            else{
                rotn++;
                strncpy(spair[rotn-1].name,namee,(strlen(namee))+1);
                spair[rotn-1].score = scoree;
                free(point1);
                point1 = (Person*) malloc(rotn*sizeof(Person));
                copy(rotn,point1,spair);
                free(spair);
                spair= (Person*) malloc((rotn+1)*sizeof(Person));
                copy(rotn,spair,point1);
            }
        }
    }
    printScoreStars(point1,rotn);
    free(spair);
    free(point1);
}