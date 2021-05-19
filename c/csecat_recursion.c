# include<stdio.h>
int fact(int a);
int main(){
    int c;
    scanf("%d",&c);
    printf("%d\n%d",c,fact(c));
    return 0;
}
int fact(int a){
    if((a==1)||(a==0)){
        return 1;
    }
    else{
        return fact(a-1)*a;
    }

}