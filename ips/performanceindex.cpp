#include<iostream>
using namespace std;
class employee
{
    char name[20];
    int empid;
    double project;
    double team;
    double bug;
    double onsite;
    //to be computed and not to be read from user
    double pi;
    public:
    //Operator overloaded to compute total marks
    void operator++();
    //Usage
    bool operator<(employee&);
    friend istream& operator>>(istream&,employee&);
    friend ostream& operator<<(ostream&,employee&);
};
class company
{
    int num;
    employee s[20];
    public:
    friend istream& operator>>(istream&,company&);
    friend ostream& operator<<(ostream&,company&);
    employee operator[](int);    
    //Sort employees in descending order
    void sort();
};
//CSS Your code has Passed Execution!
istream& operator >>(istream& in,company& c)
{
    in>>c.num;
    for(int i=0;i<c.num;i++)
    {
        in>>c.s[i];
    }
    return in;
    
}
ostream& operator <<(ostream& out,company& c)
{
    for(int i=0;i<c.num;i++)
    {
        out<<c.s[i]<<endl;
    }
    return out;
}

istream& operator >>(istream& in, employee& e)
{
    in>>e.empid>>e.name>>e.project>>e.team>>e.bug>>e.onsite;
    ++e;
    
    return in;
    
}

ostream& operator <<(ostream& out, employee& e)
{
    out<<e.empid<<endl<<e.name<<endl<<e.pi;
    return out;
}



void employee::operator ++()
{
    
    pi = project+team+bug+onsite;
}

employee company::operator [](int i)
{
    return s[i-1];
}

bool employee::operator<(employee& e)
{
    if(pi>e.pi)
    {
       return 0; 
    }
    else
    {
        return 1;
    }
}
void company:: sort()
{
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(s[i]<s[j])
            {
                employee temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    int n,i;
    company s;
    employee s1;
    cin>>s;
    cin>>i;
    s.sort();
    cout<<s;
    s1 = s[i];
    cout<<s1;
}