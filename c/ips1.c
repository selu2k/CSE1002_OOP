#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[20]; int count=0,i=0,j=0;
    char vowel[]={'a','e','i','o','u'};
    scanf("%s",s);
    getchar();
    printf("%s\n",s);
    int length = strlen(s);
    for(i=0;i<length;i++){
        for(j=0;j<5;j++){
        if(tolower(*(s+i))==*(vowel + j)){
            count++;
        }
    
        }    
    }
    printf("%d\n%d",count,(length-count));
    return 0;
}