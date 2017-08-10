#include<stdio.h>
#include<string.h>
int main(){
    unsigned int n,i,s,f[50002];
    char o[999999];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s);
        if(f[s]==0){
            strcat(o,"in\n");
            f[s]=1;
        }
        else{
            strcat(o,"out\n");
            f[s]=0;
        }
    }
    printf("%s",o);
    return 0;
}
