#include<stdio.h>
int main(){
    int i,x,f[10],m=-2147483648;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&f[i]);
    }
    for(i=0;i<x;i++){
        if(f[i]>m){
            m=f[i];
        }
    }
    printf("%d\n",m);
    i=0;
    while(m!=f[i]){
        ++i;
    }
    f[i]=-2147483648;
    m=-2147483648;
    for(i=0;i<x;i++){
        if(f[i]>m){
            m=f[i];
        }
    }
    printf("%d\n",m);
    return 0;
}
