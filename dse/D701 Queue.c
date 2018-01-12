#include<stdio.h>
#define SIZE 1001
int end=-1,queue[SIZE];
void enqueue(int input){
    end=end+1;
    queue[end]=input;
}
void dequeue(){
    int i;
    for(i=0;i<end;i++){
        queue[i]=queue[i+1];
    }
    queue[end]='\0';
    end=end-1;
}
int main(){
    int input,n,i;
    char option[6];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",option);
        if(strcmp(option,"PUSH")==0){
            scanf("%d",&input);
            enqueue(input);
        }else if(strcmp(option,"FRONT")==0){
            if(end==-1){
                printf("Empty\n");
            }else{
                printf("%d\n",queue[0]);
            }
        }else if(strcmp(option,"POP")==0){
            if(end==-1){
                printf("Cannot pop\n");
            }else{
                dequeue();
            }
        }else{
            printf("%d\n",end+1);
        }
    }
    return 0;
}
