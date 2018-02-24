#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2!=0){
            printf("%d\n",a[i]);
            return 0;
        }
    }
    printf("Goodest English\n");
    return 0;
}
