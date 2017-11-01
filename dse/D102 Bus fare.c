#include<stdio.h>
int main(){
    int x;
    double i,o;
    scanf("$%lf",&i);
    o=i/2.00;
    i=i*10;
    x=i/2;
    if(x%5!=0){
        o=o+0.01;
    }
    printf("$%.1lf\n",o);
    return 0;
}
