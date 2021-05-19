#include<iostream>
using namespace std;

class student {
    int roll;
    int mark1;
    int mark2;
    int mark3;
    char name[50];
    int attend;
    public:
        void store();
        void show();
        int check();
    
};
int avg;
void student::store(){
    cin>>roll;
    cin>>name;
    cin>>mark1;
    cin>>mark2;
    cin>>mark3;
    cin>>attend;
};

void student::show(){
    //int avg= (mark1+mark2+mark3)/3;
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<avg<<endl;
/*    else{
        cout<<"NA"<<endl;
    }*/
};
int student::check(){
    int avg= (mark1+mark2+mark3)/3;
    if(avg<40 && attend<75){
        return 1;
    }
    else{
        return 0;
    }
};


int main(){
    int n;
    int flag=0;
    cin>>n;
    student proctor[n];
    for(int i=0;i<n;i++){
        proctor[i].store();
    }
    for(int i=0;i<n;i++){
        if(proctor[i].check()==1){
            proctor[i].show();
            flag=1;
        }
    }
    if(flag=0){
        cout<<"NA"<<endl;
    }
}
