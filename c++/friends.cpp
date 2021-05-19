#include<iostream>
using namespace std;
class A{
    int x;
    friend void display(A &obj1);//confirm.. lets display access this private data
    public:
    A(int val){
        x=val;
    }
};

void display(A &obj1){   //non member
    cout<<obj1.x;
}

int main(){
    A obj(5);
    display(obj);

}