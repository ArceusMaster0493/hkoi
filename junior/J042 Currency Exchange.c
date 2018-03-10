#include<stdio.h>
int main(){
    int i,n,m;
    scanf("%d %d",&n,&m);
    double moneyA=m+0.0,moneyB=0.0,rate[n];
    for(i=0;i<n;i++){
        scanf("%lf",&rate[i]);
    }
    for(i=0;i<n;i++){
        if(rate[i+1]<rate[i]){
            if(moneyB==0.0){
                moneyB=moneyA*rate[i];
                moneyA=0.0;
            }
        }else if(rate[i+1]>rate[i]){
            if(moneyA==0.0){
                moneyA=moneyB/rate[i];
                moneyB=0.0;
            }
        }
    }
    printf("%.2lf",moneyA);
    return 0;
}
