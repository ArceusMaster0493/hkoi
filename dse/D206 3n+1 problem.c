#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a!=1){
        if(a%2==0){
            a=a/2;
            printf("%d\n",a);
        } else {
            a=a*3+1;
            printf("%d\n",a);
        }
    }
    return 0;
}
