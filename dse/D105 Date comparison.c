//unfinished
#include<stdio.h>
int main(){
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d",&y1,&m1,&d1);
    scanf("%d %d %d",&y2,&m2,&d2);
    if(y2<y1){
        printf("After");
    }
    else if (y2>y1){
        printf("Before");
    }
    else {
        if(m1<m2){
            printf("After");
        }
        else if (m1>m2){
            printf("Before");
        }
        else {
            if(d1<d2){
                printf("After");
            }
            else if (d1<d2){
                printf("Before");
            }
            else{
                printf("Same");
            }
        }
    }
    return 0;
}
