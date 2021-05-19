#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
    int eId;
    char eName[10];
};
void display();
struct employee e;
int main(){
    
    e.eId=5;
    strcpy(e.eName,"Shyam");
    display();
    
    return 0;
}

void display(){
    printf("%d",e.eId);
    printf("%s",e.eName);
}

