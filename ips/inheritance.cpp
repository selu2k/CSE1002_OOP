#include <iostream>

using namespace std;

class account
{
public:
    int acc;
    char name[20];
    int initial;
    int dep;
    int with;
    int added;
    int updated;
    void getinput();
    void display();
    void calc();
};

class savings : public account
{

};

class current : public account
{
};

void account::getinput()
{
    cin >> acc;
    cin >> name;
    cin >> initial;
    cin >> dep;
    cin >> with;
}
void account::display(){};
void account::calc()
{
    added = initial + dep;
    updated = added - with;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        savings ac;
        ac.getinput();
        if (ac.initial < 500)
        {
            cout << "insufficient initial balance, required is minimum of 500";
        }
        else
        {
            cout << "SB Account created" << endl;
            cout << "500" << endl;
            ac.calc();
            cout << ac.added << endl;

            if (ac.added - ac.with >= 500)
            {
                cout << ac.updated;
            }
            else
            {
                cout << "Violating minimum balance";
            }
        }
    }
    else if (n == 2)
    {
        current ac;
        ac.getinput();
        if (ac.initial < 1000)
        {
            cout << "insufficient initial balance, required is minimum of 1000";
        }
        else
        {
            cout << "Current account created" << endl;
            cout << "1000" << endl;
            ac.calc();
            cout << ac.added << endl;
            if (ac.added - ac.with >= 1000)
            {
                cout << ac.updated;
            }
            else
            {
                cout << "Violating minimum balance";
            }
        }
    }
    else
    {
        cout << "Invalid Input";
    }
    return 1;
}