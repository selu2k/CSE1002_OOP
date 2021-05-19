# include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is Odd num",num);
    }
    // switch (num)
    // {
    // case 2 :
    //     printf("num is 2");
    //     break;
    
    // default:
    // printf("num is not 2");
    //     break;
    // }
    return 0;
}
