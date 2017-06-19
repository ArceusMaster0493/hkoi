#include<stdio.h>
int main(){
    int a,b,f,s;
    scanf("%d %d",&a,&b);
    if(a<b){
        s=a;
    }else{
        s=b;
    }
    f=s;
    while(!((a%f==0)&&(b%f==0))){
        f=f-1;
    }
    printf("%d\n",f);
    printf("%d\n",(a*b)/f);
    return 0;
}
