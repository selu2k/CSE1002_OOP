#include <iostream>

using namespace std;

class Employee
{
    int eNo;
    char eName[25];

protected:
    void get()
    {
        cin >> eNo;
        cin >> eName;
    }
    void display()
    {
        cout << eNo << endl;
        cout << eName << endl;
    }
};

class Teaching : public Employee
{
    float Salary, Basic, TA;
    int numDayspresent;

public:
    void get();
    void calsal();
    void display();
};

class PermanentNonTeaching : public Employee
{
    float Salary, Basic;
    int numDayspresent;

public:
    void get();
    void calsal();
    void display();
};

class ContractNonTeaching : public Employee
{
    float Salary;
    int numDayspresent;

public:
    void get();
    void calsal();
    void display();
};
void Teaching::get()
{
    cin >> Basic;
    cin >> TA;
    cin >> numDayspresent;
};
void PermanentNonTeaching::get()
{
    cin >> Basic;
    cin >> numDayspresent;
};
void ContractNonTeaching::get()
{
    cin >> numDayspresent;
};
void Teaching::calsal()
{

    Salary = Basic + TA * numDayspresent + 0.30 * Basic + 0.80 * Basic;
    cout << Salary;
};
void PermanentNonTeaching::calsal()
{

    Salary = Basic + 50 * numDayspresent + 0.20 * Basic;
    cout << Salary;
};
void ContractNonTeaching::calsal()
{
    Salary = 500 * numDayspresent;
    cout << Salary;
};
void Teaching::display()
{
       cout << Salary << endl;
}
void PermanentNonTeaching::display()
{
       cout << Salary << endl;
}
void ContractNonTeaching::display()
{
       cout << Salary << endl;
}

int main()
{
    int i = 0, n = 0, m = 0, o = 0, p = 0, choice = 0;
    cin >> n;
    cin >> m;
    cin >> o;
    cin >> p;
    Teaching T[m];
    PermanentNonTeaching PNT[n];
    ContractNonTeaching CNT[p];
    while (i < n)
    {
        cin >> choice;
        if (choice == 1)
        {
            int i;
            for (i = 0; i < m; i++)
            {
                T[i].get();
                T[i].calsal();
            }
        }
        else if (choice == 2)
        {
            int i;
            for (i = 0; i < o; i++)
            {
                PNT[i].get();
                PNT[i].calsal();
            }
        }
        else if (choice == 3)
        {
            int i;
            for (i = 0; i < p; i++)
            {
                CNT[i].get();
                CNT[i].calsal();
            }
        }
        else
        {
            cout << "Invalid Input";
        }
        i = i + 1;
    }
    for (i = 0; i < m; i++)
    {
        T[i].display();
    }
    for (i = 0; i < o; i++)
    {
        PNT[i].display();
    }
    for (i = 0; i < p; i++)
    {
        CNT[i].display();
    }
    return 0;
}