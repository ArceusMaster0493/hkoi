#include<stdio.h>
int main(){
    int i,j,n,t,mode=0,maxCount=0,count;
    double sum=0,mean;
    //scanning
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //mean
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    mean=1.0*(sum/n);
    printf("%.3lf\n",mean);
    //median
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
    if(n%2==0){
        if((double)((arr[n/2]+arr[(n/2)-1])/2.00)==(int)(arr[n/2]+arr[(n/2)-1])/2){
            printf("%.0lf\n",(double)((arr[n/2]+arr[(n/2)-1])/2.00));
        }else{
            printf("%.1lf\n",(double)((arr[n/2]+arr[(n/2)-1])/2.00));
        }
    }else{
        printf("%d\n",arr[n/2]);
    }
    //mode
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            mode=arr[i];
        }
    }
    printf("%d\n",mode);
    return 0;
}
