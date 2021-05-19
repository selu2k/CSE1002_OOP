#include<stdio.h>
#include <string.h>
struct Employee{
    //data members //represent characteristics
    int id;
    char name[15];
    char desg[15];
    float basic;
    float hra;
    float sal;
    float da;
    float epf;
    char gen;
    int age;
};//syntax
int main(){
    struct Employee e;
    printf("Enter the Details....\n");
    scanf("%d",&e.id);
    scanf("%d",&e.age);
    scanf("\n");//prob with %s scanf check on the web
    scanf("%[^\n]s",&e.name);
    // getchar();
    scanf("%f",&e.basic);
    scanf("%f",&e.hra);
    scanf("%f",&e.da);
    scanf("%f",&e.epf);
    getchar();
    scanf("%[^\n]s",&e.desg);
    getchar();
    scanf("%c",&e.gen);
    e.sal=e.basic +(e.da*e.basic*0.01)+(e.hra*e.basic*0.01)-e.epf;
    // if(e.gen=='M' && e.age>45 && e.sal>50000){
    //     strcpy(e.desg,"senior manager");//promoting the employee
    //     // e.desg="senior manager"//wrong method
        printf("Employee details are:\n");
        printf("Id: %d\n",e.id);
        printf("Name: %s\n",e.name);
        printf("Salary: %f\n",e.sal);
        printf("Designation: %s\n",e.desg);
        printf("Gender: %c\n",e.gen);
        printf("Age:%d\n",e.age);
    
    return 0;
}