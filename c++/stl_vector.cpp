#include<iostream>
#include<vector>
using namespace std;

struct Person{
    int id;
    string name;
};
int main(){
    vector<Person> v;
    int n;
    cin>>n;
    // define simple input output
    
    for(int i=0;i<n;i++){
    Person p;
    cin>>p.id;
    cin>>p.name;
    v.push_back(p);
    }
    cout<<"Stored values are:"<<endl;
    for(int j=0;j<n;j++){
        cout<<v[j].id<<endl<<v[j].name<<endl;
    }
    return 0;
}