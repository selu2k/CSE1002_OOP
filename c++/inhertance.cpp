#include<iostream>
using namespace std;

class A{
    int d1;
    protected:
        int d2;
    public:
        int d3;
};

class B: public A{
    protected:
        int d3;
    void f1(){
        A::d1=5; // private
        A::d2=5;
    }
};

void f2(){
    A obj;
    obj.d2=5; // only accessed by kids
}
void main(){
    A obj;
    obj.d2=5; // not accessible to non members(here main)
    obj.d1=5;// private
    obj.d3=3;
}
//checking if git is working
//not working
//still not working
//maybe working
//still not workinghttps://github.com/selu2k/CSE1002_OOP.git
// now checking if its working