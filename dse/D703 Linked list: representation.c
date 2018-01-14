#include<stdio.h>
int main(){
    int N,H,i;
    scanf("%d %d",&N,&H);
    int ll[2][N],point=H;
    for(i=0;i<N;i++){
        scanf("%d",&ll[0][i]);
    }
    for(i=0;i<N;i++){
        scanf("%d",&ll[1][i]);
    }
    while(point!=0){
        printf("%d\n",ll[0][point-1]);
        point=ll[1][point-1];
    }
    printf("End\n");
    return 0;
}
