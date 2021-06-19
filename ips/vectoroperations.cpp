#include<iostream>
using namespace std;
class vector
{
	int num;
	int *ele;
	public:
	vector();
	vector(int);
	vector(vector&);
	vector sum (vector&);
	int product(vector&);	
	void get();
	void print();
};

vector::vector(){
    num=0;
    ele=NULL;
};
vector::vector(int a){
    num=a;
    ele=NULL;
};
vector::vector(vector & v){
    num=v.num;
    ele=NULL;
};
void vector::get(){
    cin>>num;
    ele = new int[num];
    for(int i=0;i<num;i++){
        cin>>ele[i];
    }
};
void vector::print(){
    for(int j=0;j<num;j++){
        cout<<ele[j]<<endl;
    }
};
vector vector::sum(vector &v2){
    vector v3;
    v3.num=num;
    v3.ele= new int[num];
    for(int i=0;i<num;i++){
        v3.ele[i]=ele[i]+v2.ele[i];
    }
    return v3;
};
int vector::product(vector &v2){
    int summ=0;
    for(int j=0;j<num;j++){
        summ=summ+ele[j]*v2.ele[j];
    }
    return summ;
}









int main()
{
	vector v1, v2,v3;
	int dot_Pdt;
	v1.get();
	v2.get();
	v3 = v1.sum(v2);
	v3.print();
	dot_Pdt = v1.product(v2);
	cout<<dot_Pdt;
}