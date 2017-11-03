#include<stdio.h>
int main(){
    int i,n,bal=0,operation;
    FILE *f;
    f=fopen("account.txt","r");
    fscanf(f,"%d",&n);
    for(i=0;i<n;i++){
        fscanf(f,"%d",&operation);
        bal=bal+operation;
    }
    printf("%d",bal);
    return 0;
}
