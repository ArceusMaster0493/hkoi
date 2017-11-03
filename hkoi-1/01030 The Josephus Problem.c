#include<stdio.h>
int main(){
    int i, n,list[1000],size,holder=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        list[i]=i;
        size=n;
    }
    while(size>1){
        if(holder+1<size+1){
            printf("%d ",list[holder+1]);
            list[holder+1]='\0';
            holder=holder+1;
        }else{
            if(holder>size){
                printf("%d ",list[2]);
                list[2]='\0';
                holder=2;
            }else{
                printf("%d ",list[1]);
                list[1]='\0';
                holder=1;
            }
        }
        for(i=holder;i<size;i++){
            list[i]=list[i+1];
            list[i+1]=0;
        }
        size=size-1;
    }
    printf("\n%d\n",list[1]);
    return 0;
}
