# include<stdio.h>

int main(){
    int numruns,numwick,numcatch;
    scanf("%d%d%d",&numruns,&numwick,&numcatch);
    if((numruns>=15)&&((numwick>=2) || (numcatch>=2))){
        printf("Yes");

    }
    else if((numwick>4)&&((numruns>25)||(numcatch>1))){
        printf("Yes");

    }
    else if((numwick>2)&&(numcatch>=3)){
        printf("Yes");

    }
    else{
        printf("No");

    }
    return 0;
    
}