#include<iostream>

using namespace std;

class A
{
    void f1();
    void f2();
    virtual void search(); //is search()=0 becomes pure virtual function
};                         //and class becomes abstract class
                           //we do this when we dont know the search code
                    //if we don't define it now,it must be defined by child class
class B : public A
{
    void search(){}
};
class C : public B
{
    void search(){}
};
// search this online