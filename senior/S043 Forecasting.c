#include<stdio.h>
#include<math.h>
int main(){
    int i,j,N,K;
    scanf("%d %d",&N,&K);
    double actual[N],predict[N];
    for(i=0;i<N;i++){
        scanf("%lf",&actual[i]);
        if(i+1>K){
            int sum=0;
            for(j=i;j>i-K;j--){
                sum=sum+actual[j-1];
            }
            predict[i]=sum/K;
        }
    }
/*    for(i=0;i<N;i++){
        printf("%2d | %12lf %12lf\n",i,actual[i],predict[i]);
    }*/
    double MAD=0;
    for(i=K;i<N;i++){
//        printf("%.2lf | + %12lf\n",MAD,actual[i]-predict[i]);
        MAD=MAD+fabs(actual[i]-predict[i]);
    }
    MAD=MAD/(N-K);
    printf("%.2lf\n",MAD);
    return 0;
}
