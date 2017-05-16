#include<stdio.h>
int amt;
void calc(int note){
    while(amt>=note){
        printf("%d\n",note);
        amt=amt-note;
    }
}
int main(){
    scanf("%d",&amt);
    calc(1000);
    calc(500);
    calc(100);
    calc(50);
    calc(20);
    calc(10);
}
