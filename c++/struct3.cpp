#include<iostream>
#include<cstring>

using namespace std;
class Employee
{
    int id;
    char name[10];
    char age;
    float sal;
    char design[15];
    char gen;
    int yoj;

public:
    void store();
    void display();
    void calSalary();
    void updateSalary();
};

int main()
{
    int n;
    cout<<"Enter the num of emp"<<endl;
    cin>>n;
    //Employee e[n]; //early binding



    // Employee *e=new Employee();
    // e->store();           dynamic binding single
    // e->display(); etc



    Employee *e[n]; //dynamic binding
    for (int i = 0; i < n; i++)
    {
        e[i]=new Employee();
    }
    

    for(int i=0;i<n;i++){
        cout<<"Enter the details of "<<i<<"th emp"<<endl;
        e[i]->store();
    }
    for(int i=0;i<n;i++){
        cout<<"The details of "<<i<<"th emp"<<endl;
        e[i]->display();
        e[i]->calSalary();
        cout<<"After"<<endl;
        e[i]->display();

    }


}
void Employee::display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<sal<<endl;
        cout<<design<<endl;
        cout<<gen<<endl;
        cout<<yoj<<endl;
    };
void Employee::store()
    {
        cin>>id;
        cin>>name;
        cin>>age;
        cin>>design;
        cin>>gen;
        cin>>yoj;
    };
void Employee::calSalary()
    {
        float basic;
        cout<<"Enter the basic value"<<endl;
        cin>>basic;
        sal=((basic+0.2*basic+0.2*basic)-(0.02*basic));
    };
void Employee::updateSalary()
    {
        if(gen=='M' && age>45 && yoj>2004 && (strcmp(design,"manager")==0))
        {
            sal=sal+0.5*sal;
        }
    };    