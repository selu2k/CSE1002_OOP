# include<stdio.h>
#include <stdlib.h>
struct Employee{
    int Id;
    char Name[25];
    float Sal;
};
int main(){
    struct Employee *e;
    e=(struct Employee*)malloc(sizeof(struct Employee));
    scanf("%d",&e->Id);
    scanf("%s",&e->Name);
    scanf("%f",&e->Sal);
    printf("%d\n",e->Id);
    printf("%s\n",e->Name);
    printf("%f\n",e->Sal);
    return 0;
}
