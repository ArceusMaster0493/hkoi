#include<stdio.h>
#include<string.h>
int main(){
    int i,n,pointer=-1;
    scanf("%d",&n);
    int stack[n+1];
    char cmds[n][20];
    fflush(stdin);
    for(i=0;i<n;i++){
        gets(cmds[i]);
    }
    for(i=0;i<n;i++){
//        printf("[DEBUG] %d > %s\n",i,cmds[i]);
        if(strncmp(cmds[i],"PUSH",4)==0){ //PUSH
//            printf("[DEBUG] PUSH ENTERED\n");
            int temp;
            for(temp=5;temp<21;temp++){
                cmds[i][temp-5]=cmds[i][temp];
            }
            pointer=pointer+1;
            stack[pointer]=atoi(cmds[i]);
//            printf("[DEBUG] PUSHED %d TO STACKPOINT %d\n",atoi(cmds[i]),pointer);
        }
        else if(strcmp(cmds[i],"TOP")==0){ //TOP
//            printf("[DEBUG] TOP ENTERED\n");
            if(pointer==-1){
                printf("Empty\n");
            }
            else{
                printf("%d\n",stack[pointer]);
            }
        }
        else if(strcmp(cmds[i],"SIZE")==0){ //SIZE
//            printf("[DEBUG] SIZE ENTERED\n");
            printf("%d\n",pointer+1);
        }
        else if(strcmp(cmds[i],"POP")==0){ //POP
//            printf("[DEBUG] POP ENTERED\n");
            if(pointer==-1){
                printf("Cannot pop\n");
            }
            else{
                stack[pointer]='\0';
                pointer=pointer-1;
            }
        }
        else{
//            printf("[DEBUG] WHY ARE YOU HERE\n");
        }
    }
    return 0;
}
