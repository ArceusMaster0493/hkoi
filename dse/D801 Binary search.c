#include<stdio.h>
#include<math.h>
int main(){
    int i,N,Q,s;
    scanf("%d %d",&N,&Q);
    int a[N],m;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<Q;i++){
        scanf("%d",&s);
        int L=0,R=N-1;
        do{
            m=(L+R)/2;
            if(a[m]<s){
                L=m+1;
            }else{
                R=m-1;
            }
        }while(a[m]!=s&&L<=R);
        if(a[m]==s){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
