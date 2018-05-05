#include <stdio.h>
#include <string.h>
int sq(int n){
    int i=0;
    do{
        if(n==i*i)return 1;
        i=i+1;
    }while(i*i<=n);
    return 0;
}
int tr(int n){
    int i=0,check=0;
    do{
        check=check+i;
        if(n==check)return 2;
        i=i+1;
    }while(check<=n);
    return 0;
}
int main(){
    int n,r;
    scanf("%d",&n);
    r=sq(n)+tr(n);
    switch(r){
        case 0:
            printf("Neither\n");
            break;
        case 1:
            printf("Square\n");
            break;
        case 2:
            printf("Triangular\n");
            break;
        case 3:
            printf("Both\n");
            break;
        default:
            printf("What the fuck\n");
            break;
    }
    return 0;
}
