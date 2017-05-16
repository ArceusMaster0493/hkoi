#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>19999999&&a<40000000){
        printf("Fixed\n");
    }else if((a>49999999&&a<70000000)||(a>89999999&&a<100000000)){
        printf("Mobile\n");
    }
    return 0;
}
