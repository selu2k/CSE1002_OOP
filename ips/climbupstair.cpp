#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arrep1[n][2], arrep2[n][2];
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2)
            swap(x1,x2);
        
        arrep1[i][0]=x1;
        arrep1[i][1]=y1;
        arrep2[i][0]=x2;
        arrep2[i][1]=y2;
    }
    int j=0;
    vector<int> vect;
    for(int i=1;i<n;i++){
        if((arrep2[j][0]==arrep1[i][0]) && (arrep2[j][1]<arrep1[i][1])){
            vect.push_back(arrep1[j][0]);
            vect.push_back(arrep1[j][1]);
            vect.push_back(arrep2[j][0]);
            vect.push_back(arrep2[j][1]);
            vect.push_back(arrep1[i][0]);
            vect.push_back(arrep1[i][1]);
            vect.push_back(arrep2[i][0]);
            vect.push_back(arrep2[i][1]);
        }
        j=i;
    }

    for(int i=0;i<vect.size();i=i+2){
        cout<<"("<<vect[i]<<", "<<vect[i+1]<<") ";
    }

    return 0;
}