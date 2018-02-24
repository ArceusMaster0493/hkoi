#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,o=1;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<i;j++){
            printf("%d ",o);
            o++;
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            printf("%d ",o);
            o++;
        }
        printf("\n");
    }
    return 0;
}
