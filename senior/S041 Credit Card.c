#include<stdio.h>
#include<math.h>
int main(){
    int i,n,sumo=0,sume=0,diff,cd;
    scanf("%d",&n);
    int card[n];
    char input[n];
    scanf("%s",input);
    for(i=0;i<n;i++){
        card[i]=input[i]-'0';
        if(i%2==0){
            sumo=sumo+card[i];
        }else{
            sume=sume+card[i];
        }
    }
    diff=sumo-sume;
    printf("diff: %d\n",diff);
    if((diff<=0&&n%2==0)||(diff>=0&&n%2!=0)){
        cd=abs(diff)%11;
    }else{
        cd=11-(abs(diff)%11);
    }
    if(cd>9){
        printf("-1\n");
    }else{
        printf("%d\n",cd);
    }
    return 0;
}
