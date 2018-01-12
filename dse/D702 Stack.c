#include<stdio.h>
#define SIZE 1001
int point=-1,stack[SIZE];
void add(int input){
    point=point+1;
    stack[point]=input;
}
void removee(){
    stack[point]='\0';
    point=point-1;
}
int main(){
    int input,n,i;
    char option[6];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",option);
        if(strcmp(option,"PUSH")==0){
            scanf("%d",&input);
            add(input);
        }else if(strcmp(option,"TOP")==0){
            if(point==-1){
                printf("Empty\n");
            }else{
                printf("%d\n"   ,stack[point]);
            }
        }else if(strcmp(option,"POP")==0){
            if(point==-1){
                printf("Cannot pop\n");
            }else{
                removee();
            }
        }else{
            printf("%d\n",point+1);
        }
    }
    return 0;
}
