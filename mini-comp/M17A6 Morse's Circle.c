#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double r;
    scanf("%d",&n);
    r=(1.00/24.00)*((n*n*n*n)-(6*n*n*n)+(23*n*n)-(18*n)+24);
    printf("%.0lf",r);
    return 0;
}
