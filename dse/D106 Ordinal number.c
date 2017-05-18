#include<stdio.h>
int main(){
    int input,modded100,modded10;
    scanf("%d",&input);
    modded10=input%10;
    modded100=input%100;
    switch(modded10){
    case 0:
        printf("%dth",input);
        break;
    case 1:
        if(modded100==11){
            printf("%dth",input);
        } else {
            printf("%dst",input);
        }
        break;
    case 2:
        if(modded100==12){
            printf("%dth",input);
        } else {
            printf("%dnd",input);
        }
        break;
    case 3:
        if(modded100==13){
            printf("%dth",input);
        } else {
            printf("%drd",input);
        }
        break;
    case 4 ... 9:
        printf("%dth",input);
        break;
    }
    return 0;
}
