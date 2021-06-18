/*#include<iostream>

using namespace std;

class SHAPE{
    protected:
    int ta,tb,th,ea,eb,pa,pb,cr,cs;
    public:
    float pie=3.14;
    void getdata(){
        cin>>ta;
        cin>>tb;
        cin>>th;
        cin>>ea;
        cin>>eb;
        cin>>pa;
        cin>>pb; 
        cin>>cr; 
        cin>>cs; 
    }
    virtual void area()=0;
    virtual void surfaceArea();
};
class TRAPEZPOID:public SHAPE{
    public:
    void area(){
        float ar=0.5*(ta+tb)*th;
        cout<<ar<<endl;
    }

};
class ELLIPSE:public SHAPE{
    public:
    void area(){
        float ar = pie*ea*eb;
        cout<<ar<<endl;
    }
};
class PARALLELOGRAM:public SHAPE{
    public:
    void area(){
        float ar = pa*pb;
        cout<<ar<<endl;
    }
};
class CONE:public SHAPE{
    public:
    void area(){
        float ar = pie*cr*cs;
        cout<<ar<<endl;
    }
    void surfaceArea(){
        float sur_ar = pie*cs*cr +pie*cr*cr;
        cout<<sur_ar<<endl;
    }
};



int main(){
    SHAPE *arrea;
    TRAPEZPOID *t;
    ELLIPSE *e;
    PARALLELOGRAM *p;
    CONE *c;
    arrea->getdata();
    t->area();
    e->area();
    p->area();
    c->area();
    c->surfaceArea();
    return 1;
}*/
#include <iostream>
#define pi 3.14
using namespace std;
using std::string;

class shape
{
protected:
    float a;
    float b;
    float area;

public:
    void getdata()
    {
        cin >> a >> b;
        area = 1.00;
    }
    virtual void Area() = 0;
    void Surface_Area()
    {
        return;
    }
};

class trapezoid : public shape
{
    float h;

public:
    void get()
    {
        cin >> h;
    }
    void Area()
    {
        area = (a + b) * h / 2;
        cout << area << endl;
    }
};

class ellipse : public shape
{
public:
    void Area()
    {
        area = pi * a * b;
        cout << area << endl;
    }
};
class parallelogram : public shape
{
public:
    void Area()
    {
        area = a * b;
        cout << area << endl;
    }
};
class cone : public shape
{
    float r;
    float s;
    float sa;

public:
    void get()
    {
        cin >> r >> s;
    }
    void Area()
    {
        area = pi * r * s;
        cout << area << endl;
    }
    void Surface_Area()
    {
        sa = pi * r * r + pi * r * s;
        cout << sa << endl;
    }
};

int main()
{
    trapezoid t;
    t.getdata();
    t.get();

    ellipse e;
    e.getdata();

    parallelogram p;
    p.getdata();

    cone c;
    c.get();

    t.Area();
    e.Area();
    p.Area();
    c.Area();
    c.Surface_Area();
    return 0;
}