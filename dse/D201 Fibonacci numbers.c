#include<stdio.h>
int main(){
    int i,x,n0=0,n1=1,n2=1,result=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        n0=n1;
        n1=n2;
        n2=n0+n1;
        result=n0;
    }
    printf("%d\n",result);
}
