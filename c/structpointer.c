#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
    int id;
    char name[20];
};

int main(){
    struct employee e[2];
    e[0].id=1;
    strcpy(e[0].name,"ram");
    e[1].id=2;
    strcpy(e[1].name,"sita");
    struct employee *ptr;
    ptr=e;
    printf("%s\n",e[1].name);
    printf("%s\n",(ptr+1)->name);
    return 0;
}