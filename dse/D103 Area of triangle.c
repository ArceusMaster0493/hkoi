#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main(){
    int a,b;
    double C,r;
    scanf("%d %d %lf",&a,&b,&C);
    r=0.5*a*b*sin(C*(PI/180));
    printf("%.3lf",r);
    return 0;
}
