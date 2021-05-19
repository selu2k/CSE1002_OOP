#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,n,nguess=1;
    srand(time(0));
    num = rand()%100 + 1;
    printf("Entre your guess\n");
    
    do{
        scanf("%d",&n);
        if(n>num){
            printf("Lower your number\n");
        }
        else if(n<num){
            printf("Increase your number\n");
           
        }
        else{
            printf("You took %d guesses",nguess);
        }
        nguess++;

    }while(n!=num);



    return 0;
}