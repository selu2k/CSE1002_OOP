#include<iostream>

using namespace std;
class Employee
{
    int eid;
    string eName;
    float eSal;
    public:
       Employee();
       Employee(int a):
       void calSal();
       void calSal(int x);
       void store();
       void display();
       bool isExists(int x);

};
Employee::Employee()
{

}
void Employee::calSal()
{
    float basic;
    cin>>basic;
    eSal=basic + 0.2*basic ;
}
void Employee::calSal(int x)
{

}