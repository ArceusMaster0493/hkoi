#include<stdio.h>
#include<string.h>
int main(){
    int v,n,i,s=0,c=0;
    scanf("%d %d",&v,&n);
    int p[1002];
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        s=s+p[i];
    }
    while(s>=v){
        c=c+250;
        s=s-250;
    }
    printf("$%d\n",c);
    return 0;
}
