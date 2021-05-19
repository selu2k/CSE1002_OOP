#include<iostream>
#include<cstring>
using namespace std;

class vax
{
    int batch;
    char nameV[20];
    char nameL[30];
    int price;
    string place;
    int NumQuantity;
    
    public:
       static char s[20];
       void store();
       int search(char a[]);
       int search(int num);
       int search();
       void display();
       /*void conPlace();
       void conNum();
       void conName();*/
};

void vax::store(){
    cin>>batch>>nameV>>nameL>>price>>NumQuantity>>place;
};
int vax::search(char a[]){
    if(strcmp(nameL,a)==0){
        return 1;
    }
}
int vax::search(int num){
    if(num>NumQuantity){
        return 1;
    }
}
int vax::search(){
    
    if(s==place){
        return 1;
    }
}
void vax::display(){
    cout<<batch<<nameV<<nameL<<price<<NumQuantity<<place;
};



int main(){
    int n;
    cin>>n;
    vax *vaccine[n]; //dynamic binding
    for (int i = 0; i < n; i++)
    {
        vaccine[i]=new vax();
    }
    for(int i=0;i<n;i++){
        vaccine[i]->store();
    }
    int k;
    if(k==1){
        char plc[30];
        cin>>plc;
        for(int i=0;i<n;i++){
            if(vaccine[i]->search(plc)==1){
                vaccine[i]->display();
            }

        }
    }
    if(k==2){
            int num;
            cin>>num;
            for(int i=0;i<n;i++){
                if(vaccine[i]->search(num)==1){
                    vaccine[i]->display();
                }
            }
    }
    if(k==3){
            cin>>vax::s;
            for(int i=0;i<n;i++){
                if(vaccine[i]->search()==1){
                    vaccine[i]->display();
                }
            }
    }
    return 0;
}