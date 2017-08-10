#include<stdio.h>
int main(){
    int i,j,n,x=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<n;j++){
            x=x+i;
        }
    }
    for(i=n;i>0;i--){
        for(j=0;j<n;j++){
            printf("%d ",x);
            x=x-i;
        }
        printf("\n");
    }
    return 0;
}
