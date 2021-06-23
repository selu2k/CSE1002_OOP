#include <iostream>
#include <cstdlib>
using namespace std;

int n;

int search(int y, int arr[][5],int h)
{
    int l=0;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(y==arr[mid][2])
        {
            return mid;
        }
        else if(y>arr[mid][2])
        {
            l=mid+1;
        }
        else if(y<arr[mid][2])
        {
            h=mid-1;
        }
    }
    return -1;
}
int main()
{
    int j=-1;
    cout<<"Number of Points 'n':  ";
    cin>>n;

    int arr[n][5],x,y;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;

        int result=search(y,arr,j);

        if(result== -1)
        {
            j++;
            arr[j][0]=x;
            arr[j][1]=x;
            arr[j][2]=y;
            arr[j][4]=1;
        }
        else{
            if(x<arr[result][0])
            {
                arr[result][0]=x;
                arr[result][4]++;
            }
            else if(x>arr[result][1])
            {
                arr[result][1]=x;
                arr[result][4]++;
            }
            else{
                arr[result][4]++;
            }
        }
    }
    
    for(int i=0;i<=j;i++)
    {
        arr[i][3]=arr[i][1]-arr[i][0];
    }
    
    int max_pos=0;
    int max_fre=arr[0][4];
    for(int i=1;i<=j;i++)
    {
        if(max_fre>arr[i][4])
        {
            max_fre=arr[i][4];
            max_pos=i;
        }
        else if(max_fre==arr[i][4])
        {
            if(arr[i][3]>arr[max_pos][3])
            {
                max_pos=i;
            }
        }
    }

    cout<<"X coordinate of endpoint1 of desired line: "<<arr[max_pos][0]<<endl;
    cout<<"Y coordinate of endpoint1 of desired line: "<<arr[max_pos][2]<<endl;
    cout<<"X coordinate of endpoint2 of desired line: "<<arr[max_pos][1]<<endl;
    cout<<"Y coordinate of endpoint2 of desired line: "<<arr[max_pos][2]<<endl;

    return 0;
}