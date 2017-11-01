#include<stdio.h>
#include<string.h>
int main(){
    int r=0;
    int i[4];
    char o0,o1;
    scanf("%d %c %d %c %d",&i[0],&o0,&i[1],&o1,&i[2]);
    if(o1=='*'){
        r=i[1]*i[2];
        switch(o0){
        case '+':
            r=i[0]+r;
            break;
        case '-':
            r=i[0]-r;
            break;
        default:
            r=i[0]*r;
            break;
        }
    }
    else{
        switch(o0){
        case '+':
            r=i[0]+i[1];
            break;
        case '-':
            r=i[0]-i[1];
            break;
        default:
            r=i[0]*i[1];
            break;
        }
        switch(o1){
        case '+':
            r=r+i[2];
            break;
        default:
            r=r-i[2];
            break;
        }
    }
    printf("%d\n",r);
    return 0;
}
