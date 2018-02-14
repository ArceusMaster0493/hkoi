#include<stdio.h>
int array1[12],array2[12],available1=1,available2=1;
int exist1(int input){
    int i;
    for(i=0;i<12;i++){
        if(input==array1[i]){
            return 1;
        }
    }
    return 0;
}
int exist2(int input){
    int i;
    for(i=0;i<12;i++){
        if(input==array2[i]){
            return 2;
        }
    }
    return 0;
}
int main(){
    int i,n;
    for(i=0;i<12;i++){
        array1[i]=999;
        array2[i]=999;
    }
    for(i=0;i<6;i++){
        scanf("%d",&array1[i]);
        if(array1[i]==6){
            array1[11-i]=9;
        }else if(array1[i]==9){
            array1[11-i]=6;
        }
    }
    for(i=0;i<6;i++){
        scanf("%d",&array2[i]);
        if(array2[i]==6){
            array2[11-i]=9;
        }else if(array2[i]==9){
            array2[11-i]=6;
        }
    }
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        char input1c=getchar();
        char input2c=getchar();
        char useless=getchar();
        int input1=input1c-'0',input2=input2c-'0';
        int check1=exist1(input1)+exist2(input1),check2=exist1(input2)+exist2(input2);
        if(check1==3){
            if(check2!=0){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else if(check2==3){
            if(check1!=0){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else if(check1==2){
            if(check2==1){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else if(check1==1){
            if(check2==2){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else{
            printf("No\n");
        }
    }
}
