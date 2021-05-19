// #include<stdio.h>

// int j=5;
// void f(int j){
//     printf("%d\n",j);
//     j=13;
//     printf("%d\n",j);
// }
// int main(){
//     printf("%d\n",j);
//     f(10);
//     j=12;
//     printf("%d\n",j);
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int i,int j){
    int temp;
    temp =i;
    i=j;
    j=temp;
    printf("%d,%d\n",i,j);

}

int main(){
    int x=5,y=7;
    printf("%d,%d\n",x,y);
    swap(x,y);
    printf("%d,%d\n",x,y);
    return 0;
}