# include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b= temp;

}
int main(){
    int a=4,b=5;
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}