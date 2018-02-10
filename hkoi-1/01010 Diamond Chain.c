#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int i,N,r=0;
    scanf("%d",&N);
    int x[N];
    for(i=0;i<N;i++){
        scanf("%d",&x[i]);
    }
    int dp[N];
    r=dp[0]=x[0];
    for(i=1;i<N;i++){
        dp[i]=max(dp[i-1]+x[i],x[i]);
        r=max(dp[i],r);
    }
    printf("%d\n",max(r,0));
    return 0;
}
