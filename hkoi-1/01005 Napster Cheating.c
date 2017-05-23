#include<stdio.h>
#include<string.h>
int main(){
    char p[9999],q[9999];
    int c,d,i;
    gets(p);
    c=strlen(p)-4;
    d=c-1;
    for(i=0;i<c+2;d--,i++){
        q[i]=p[d];
    }
    printf("%s.mp3",q);
    return 0;
}
