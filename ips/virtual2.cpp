#include <iostream>
using namespace std;
class Account
{
    int accNo;
    char name[25];

public:
    virtual void getA()
    {
        cin >> accNo;
        cin >> name;
    }

    virtual void withdrawal() = 0;
    virtual void deposit() = 0;
};



class SB: public Account {
    public:
    int initial;
    int dep;
    int balance;
    int with;
    void deposit(){
        cin>>initial;
        cin>>dep;
        if(initial<500){
            cout<<"Required is minimum of 500";
            exit(0);
        }
        else{
            cout<<"SB Account created"<<'\n';
            balance = initial + dep;
            cout<<initial<<'\n';
            cout<<balance<<'\n';
        }
    }
    void withdrawal(){
        cin>>with;
        if(balance-with<500){
            cout<<"Violating minimum balance";
        }
        else{
            balance=balance-with;
            cout<<balance;
        }
    }
};

class Current: public Account{
    public:
    int initial;
    int dep;
    int balance;
    int with;
    void deposit(){
        cin>>initial;
        cin>>dep;
        if(initial<1000){
            cout<<"Required is minimum of 1000";
            exit(0);
        }
        else{
            cout<<"Current Account created"<<endl;
            balance = initial + dep;
            cout<<initial<<'\n';
            cout<<balance<<'\n';
        }
    }
    void withdrawal(){
        cin>>with;
        if(balance-with<1000){
            cout<<"Violating minimum balance";
        }
        else{
            balance=balance-with;
            cout<<balance;
        }
    }
};



int main()
{
    int choice;
    cin >> choice;
    Account *bptr;
    SB sb;
    Current cu;
    if (choice == 1)
    {
        bptr = &sb;
        bptr->getA();
        bptr->deposit();
        bptr->withdrawal();
    }
    else if (choice == 2)
    {
        bptr = &cu;
        bptr->getA();
        bptr->deposit();
        bptr->withdrawal();
    }
    else
    {
        cout << "Invalid Input";
    }
}
