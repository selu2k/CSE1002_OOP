# include<stdio.h>
#include<string.h>
struct student{
    char name[15];
    int age;
    float cgpa;
    char lang[20];
    char city[20];
    char bday[5];
    char gen;
};
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        scanf("\n");
        scanf("%[^\n]s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%f",&s[i].cgpa);
        // scanf("\n");
        scanf("%s",&s[i].lang);
        scanf("%s",&s[i].city);
        scanf("%s",&s[i].bday);
        scanf("%c",&s[i].gen);
        if(s[i].gen=='M' && s[i].age>18 && s[i].cgpa>8.5 && !strcmp(s[i].lang,"tamil")
        && !strcmp(s[i].city,"vellore")&& !strcmp(s[i].bday,"03.03")){
            count++;
        }

    }
    printf("%d",count);
    
    return 0;
}