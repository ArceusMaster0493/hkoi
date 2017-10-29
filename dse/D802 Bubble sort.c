#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int i,s,c=0,m,a[2001],f=1;
    scanf("%d %d",&s,&m);
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    if(m==0){
        while(f!=0){
            f=0;
            for(i=0;i<s-1;i++){
                if(a[i]>a[i+1]){
                    swap(&a[i],&a[i+1]);
                    c++;
                    f=1;
                }
            }
        }
    }else{
        while(f!=0){
            f=0;
            for(i=0;i<s-1;i++){
                if(a[i]<a[i+1]){
                    swap(&a[i],&a[i+1]);
                    c++;
                    f=1;
                }
            }
        }
    }
    printf("%d\n",c);
    for(i=0;i<s;i++){
        printf("%d",a[i]);
        if(i<s-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
