#include<iostream>

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
}