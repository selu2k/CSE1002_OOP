#include<iostream>
using namespace std;

class ATM{
    public:
    void display_Combination();
    void display_Combination(int amount);
};

void ATM::display_Combination(){
    int amount;
    cin>>amount;
    
    int num10,num5,num2,num1;
    
    num10=amount/10;
    amount=amount%10;
    
    num5=amount/5;
    amount=amount%5;
    
    num2=amount/2;
    amount=amount%2;
    
    num1=amount;
    
    int total=num10+num5+num2+num1;
    int ans[total];
    int k=0;
    for(int i=0;i<num10;i++){
        ans[k]=10;
        k++;
    }
    for(int i=0;i<num5;i++){
        ans[k]=5;
        k++;
    }
    for(int i=0;i<num2;i++){
        ans[k]=2;
        k++;
    }
    for(int i=0;i<num1;i++){
        ans[k]=1;
        k++;
    }
    
    for(int i=0;i<total-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[total-1];
}

void ATM::display_Combination(int amount){
    int num10,num5,num2,num1;
    
    num10=amount/10;
    amount %=10;
    
    num5=amount/5;
    amount %=5;
    
    num2=amount/2;
    amount %=2;
    
    num1=amount;
    
    int total= num10+ num5+ num2+num1;
    int ans[total];
    int k=0;
    for(int i=0;i<num10;i++){
        ans[k]=10;
        k++;
    }
    for(int i=0;i<num5;i++){
        ans[k]=5;
        k++;
    }
    for(int i=0;i<num2;i++){
        ans[k]=2;
        k++;
    }
    for(int i=0;i<num1;i++){
        ans[k]=1;
        k++;
    }
    
    for(int i=0;i<total-1;i++){
        cout << ans[i] << ", ";
    }
    cout<<ans[total-1];
};


int main(){
    int n;
    cin>>n;
    ATM a;
    if(n==1){
        a.display_Combination();
    }
    else{
        int amount;
        cin>>amount;
        a.display_Combination(amount);
    }
}
