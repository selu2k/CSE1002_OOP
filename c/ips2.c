#include<stdio.h>
int n;

void largest(int arr[]){
    int large=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large)
        large=arr[i];
    }
    printf("%d",large);
}

int main(){
    int i=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest(arr);
    return 0;
}