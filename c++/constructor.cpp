
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
public:
    int eID;
    string eName;

public:
    Employee();    //This is a constructor....When the name of the class is used a member function its called as a constructor
    Employee(int); // Parameterised constructor;
    void store();
    void disp();
};
//Constructor runs automatically when a new object is created (here in line 49)

Employee::Employee()
{
    cout << "Hi I am a Constructor...";
    eID = 0;         //default values
    eName = "Situn"; //default values
    cout << eName << endl;
}

Employee::Employee(int)
{
}

void Employee::store()
{
    cin >> eID;
    // cin>>eName;
}

void Employee::disp()
{
    cout << eID << endl;
    cout << eName << endl;
}

int main()
{
    int n;
    cout << "Enter no.of Employee (n) " << endl;
    cin >> n;

    Employee *e[n];
    for (int i = 0; i < n; i++)
    {
        e[i] = new Employee();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of the " << i << "th Employee" << endl;
        e[i]->store();
    }
    for (int i = 0; i < n; i++)
    {
        e[i]->disp();
    }
}

/*
#include<iostream>

using namespace std;
class testing{
    int t1;
    int t2;
    public:
       void store();
       friend void display(testing &obj);
       testing(int a){
           t1= a;
       }
};

void display(testing &obj){
    cout<<obj.t1
}








*/