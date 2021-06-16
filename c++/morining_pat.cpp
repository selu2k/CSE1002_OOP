#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


class Person{
    public:
    int adhaar;
    char name[100];
    int age;
    char gen;
    //friend class Compare;
};
// template<class T>
// T Compare() {
//     public:
//     operator(const Person& rhs, const Person& lhs) {
//         return rhs.adhaar < lhs.adhaar;
//     }
// };
bool CompareAdhaar(const Person & left,const Person & right)
{
    return left.adhaar > right.adhaar;
};

int firstcheck(int n){
    int first = n;

    while(first >= 10)
    {
        first = first / 10;
    }
    return first;
};

int main(){
    int n;
    cin>>n;
    vector<Person> v;
    for(int i=0;i<n;i++){
        Person p;
        cin>>p.adhaar>>p.name>>p.age>>p.gen;
        v.push_back(p);
    }
    vector<Person> v2;
    for(int j=0;j<n;j++){
        if(firstcheck(v[j].adhaar) != 1){
            v2.push_back(v[j]);
        }
    }
    vector<Person> v3;
    for(int j=0;j<n;j++){
        if(v[j].name[0]!='A'&&v[j].name[0]!='E'&&v[j].name[0]!='I' && v[j].name[0]!='O' && v[j].name[0]!='U'){
            v3.push_back(v[j]);
        }
    }
    sort(v3.begin(), v3.end());
    for(int j=0;j<v3.size();j++){
        cout<< v3[j].name<<'\n';
    }
    sort(v2.begin(), v2.end(),CompareAdhaar);
    for(int j=0;j<v2.size();j++){
        
        cout<<v2[j].name<<'\n';
    }
    return 0;
}

