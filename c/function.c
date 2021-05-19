#include<stdio.h>

int greatnum();      

int main()
{
    int result;
    result = greatnum();
    printf("%d", result);
    return 0;
}

int greatnum() 
{
    int i, j, greater;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &i, &j);
    if(i > j) {
        greater = i;
    }
    else {
        greater = j;
    }
    
    return greater;
}