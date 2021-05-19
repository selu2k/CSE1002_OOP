#include<iostream>
using namespace std;
class A
{
    private:
        int d1;
        char d2[5];
    public:
        
        void display();
        void store();
};
int main()
{
    A obj1; //static creation
    cin>>obj1.d1;
}