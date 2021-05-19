# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element ");
        scanf("%d",&a[i]);    
    }
    for(int j=0;j<n;++j){
        if(a[j]%2==0){
            printf("%d is even\n",a[j]);
        }
        else{
            printf("%d is odd \n",a[j]);
        }

    }
    return 0;
}