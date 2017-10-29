#include<stdio.h>
int main(){
    int i,n,a,f[201],s=0;
    for(i=0;i<202;i++){
        f[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(f[a+100]==0){
            f[a+100]++;
            s=s+a;
        }
    }
    printf("%d",s);
    return 0;
}
