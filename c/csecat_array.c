# include<stdio.h>

int main(){
    int marks[5];
    
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("marks are %d\n",marks[i]);
    }
    return 0;
}