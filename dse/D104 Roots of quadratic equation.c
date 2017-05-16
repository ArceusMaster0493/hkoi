#include<stdio.h>
#include<math.h>
int main(){
    int d;
    double a,b,c,x1,x2,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    d = (b*b-4*a*c);
    if(d<0){
        printf("None\n");
    }
    else if(d==0){
        x1 = ( -b + sqrt(d) ) / (2*a);
        printf("%.3lf\n",x1);
    }
    else{
        x1 = ( -b + sqrt(d) ) / (2*a);
        x2 = ( -b - sqrt(d) ) / (2*a);
        if(x1>x2){
            temp=x1;
            x1=x2;
            x2=temp;
        }
        printf("%.3lf %.3lf\n",x1,x2);
    }
    return 0;
}
