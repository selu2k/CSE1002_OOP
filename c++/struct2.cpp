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
    void store()
    {
        cin>>id;
        cin>>name;
        cin>>age;
        cin>>design;
        cin>>gen;
        cin>>yoj;
    };
    void display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<sal<<endl;
        cout<<design<<endl;
        cout<<gen<<endl;
        cout<<yoj<<endl;
    };
    void calSalary()
    {
        float basic;
        cout<<"Enter the basic value"<<endl;
        cin>>basic;
        sal=((basic+0.2*basic+0.2*basic)-(0.02*basic));
    };
    void updateSalary()
    {
        if(gen=='M' && age>45 && yoj>2004 && (strcmp(design,"manager")==0))
        {
            sal=sal+0.5*sal;
        }
    };
};

int main()
{
    Employee e;
    e.store();
    cout<<"=========Before========="<<endl;
    e.display();
    e.calSalary();
    cout<<"=========After========="<<endl;
    e.display();

}