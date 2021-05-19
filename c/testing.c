// # include<stdio.h>

// int main(){
//     double a;
//     printf("%d",sizeof(a));

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(){
    // char num[20];
    // int len;
    // scanf("%s",num);
    // len=strlen(num);
    // int a =atio(num);
    // printf("%d",sizeof(a));
    // num=itoa(a);
    int p =561;
    p = p / 10 + (p % 10) * pow(10,2);
    printf("%d",p);



    return 0;
}