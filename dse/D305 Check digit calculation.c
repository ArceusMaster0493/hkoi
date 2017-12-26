#include<stdio.h>
int main(){
    char id[9];
    int sum,digit,i;
    scanf(" %s",id);
    if(strlen(id)==7){
        sum=9*36+8*(id[0]-55)+7*(id[1]-48)+6*(id[2]-48)+5*(id[3]-48)+4*(id[4]-48)+3*(id[5]-48)+2*(id[6]-48);
    }else{
        sum=9*(id[0]-55)+8*(id[1]-55)+7*(id[2]-48)+6*(id[3]-48)+5*(id[4]-48)+4*(id[5]-48)+3*(id[6]-48)+2*(id[7]-48);
    }
    digit=11-sum%11;
    if(digit==10){
        printf("%s(A)\n",id);
    }else if(digit==11){
        printf("%s(0)\n",id);
    }else{
        printf("%s(%d)\n",id,digit);
    }
    return 0;
}
