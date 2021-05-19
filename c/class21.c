# include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Number of inp: \n");
    scanf("%d",&n);
    int a[n];
    int d=0,i=0,result=0,x;
    for(i=0;i<n;i++){
        printf("Enter the num: \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        x= a[i];
    while(x!=0){
        d=x%10;
        x=x/10;
        result= pow(d,3)+ result;
    }
    if(result==a[i]){
        printf("%d is an armstrong number. \n",a[i]);
    }
    else{
        printf("%d is not an armstrong number. \n",a[i]);
    }
    }
    return 0;
}