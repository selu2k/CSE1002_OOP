# include<stdio.h>
struct book{
    int ISBN;
    char name[10];
    float price;
    int yob;
    char author[15]; 

};
int main(){
    
    int n,count=0;
    printf("Enter num of books...");
    scanf("%d",&n);
    struct book b[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&b[i].ISBN);
        scanf("\n");
        scanf("%[^\n]s",b[i].name);
        scanf("%f",&b[i].price);
        scanf("%d",&b[i].yob);
        scanf("\n");
        scanf("%[\n]s",b[i].author);
        if(b[i].yob<2004){

            b[i].price =(b[i].price*.5);
            count++;

        }
        

    }
    for(i =0;i<n;i++){
        //put the details to be printed in this loop
    }
    printf("Books sold with offers : %d",count);
    return 0;
}