# include<stdio.h>
#include <stdlib.h>

int main(){
    int i=79;
    int *j;
    j= &i;
    int **k=&j;
    int arr[]={1,2,3,4};
    int *ptr=arr;
    printf("%d\n",&arr[0]);
    printf("%d\n",ptr);
    printf("%d\n",arr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",(ptr+1));
    printf("%d\n",&*(ptr+1));
    printf("%d\n",&arr[1]);
    // int *p;
    // // p=(int *)malloc(sizeof(int));
    // // scanf("%d",p);
    // printf("%u",*p);
    /*printf("%u\n",*j);
    printf("%u\n",j);
    printf("%d\n",i);
    printf("%u\n",&i);
    printf("%u\n",&j);
    printf("%u\n",**k);
    printf("%u\n",*k);
    printf("%u\n",k);*/
    return 0;
 }
