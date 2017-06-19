#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<101;i++){
        if(i%n==0){
            printf("Clap");
        }else if(n%10==i%10){
            printf("Clap");
        }else if((i-n*10)>0&&(i-n*10)<10){
            printf("Clap");
        }else{
            printf("%d",i);
        }
        if(i%10==0){
            printf("\n");
        }else{
            printf(" ");
        }
    }
    return 0;
}
