#include<stdio.h>
#include<math.h>
int main(){
    char ic,fc;
    int ii,fi,rc,ri,x;
    scanf(" %c%d",&ic,&ii);
    scanf(" %c%d",&fc,&fi);
    rc=abs(fc-ic);
    ri=abs(fi-ii);
    if(rc>ri){
        x=ri+(rc-ri);
    }
    else{
        x=rc+(ri-rc);
    }
    printf("%d",x);
    return 0;
}
