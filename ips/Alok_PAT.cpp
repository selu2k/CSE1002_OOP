#include <iostream>

using namespace std;

class employee
{

    int id;
    char name[30];

protected:
    int year;

    void get()
    {
        cin >> id >> name >> year;
    }
    void display()
    {
        cout << "Employee id:" << id << endl;
    }
};

class salary : virtual public employee
{
protected:
    int basic;
    int da;
    int hra;
    int allowances;

    void get();
};

class incentive : virtual public employee
{
    //public:
protected:
    int incen;

    void incent();
};
class payment : public salary, public incentive
{
public:
    float salary;
    float sum;
    void calc()
    {
        sum = basic + da + hra + allowances;
        salary = sum + sum * incen*0.01;
        //cout<<salary;
    }
    void display()
    {
        salary::get();
        incentive::incent();
        calc();
        employee::display();
        cout<<"Current Month Salary:"<<salary;
    }
};

void salary::get()
{
    employee::get();
    cin >> basic;
    cin >> da;
    cin >> hra;
    cin >> allowances;
};

void incentive::incent()
{
    if (2021 - year > 10)
    {
        incen = 50;
    }
    else if (2021 - year > 5 && 2021 - year < 10)
    {
        incen = 25;
    }

    else
    {
        incen = 10;
    }
    //return incen;
};

int main()
{
    payment emp;
    emp.display();
}