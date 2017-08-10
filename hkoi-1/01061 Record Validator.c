#include<stdio.h>
#include<string.h>
int main(){
    int i,cma=0,flg=0,cnt=0;
    char rec[61];
    gets(rec);
    for(i=0;i<sizeof(rec);i++){
        if(rec[i]==','){
            cma=cma+1;
        }
    }
    if(cma!=5){
        printf("Invalid\n");
        return 0;
    }
    else{
        for(i=0;i<sizeof(rec);i++){
            if(rec[i]!=','&&rec[i]!=' '&&rec[i]!='\0'){
                flg=1;
            }
            if(rec[i]==','||rec[i]=='\0'){
                if(flg==0){
                    cnt=cnt+1;
                }
                flg=0;
                if(rec[i]=='\0'){
                    printf("%d\n",cnt);
                    return 0;
                }
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
