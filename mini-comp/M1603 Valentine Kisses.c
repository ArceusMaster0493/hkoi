#include<stdio.h>
int main(){
    char message[100001];
    int i,j,n,kiss=0,enter=0,temp=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(message);
        for(j=0;j<strlen(message);j++){
            if(enter==0){
//                printf("ENTER IS 0\n");        //DEL
                if(message[j]=='>'){
                    enter=1;
//                    printf("ENTERED\n");        //DEL
                }
            }else{
//                printf("ENTER IS 1\n");        //DEL
                if(message[j]=='<'){
//                    printf("LEFT: ACCUMULATED KISS\n");        //DEL
                    kiss=kiss+temp;
                    temp=0;
                    enter=0;
                }else if(message[j]=='>'){
//                    printf("CLEARED TEMP\n");        //DEL
                    temp=0;
                }else if(message[j]!='3'){
//                    printf("LEFT: CLEARED TEMP\n");        //DEL
                    temp=0;
                    enter=0;
                }else{
//                    printf("ACCUMULATED TEMP\n");        //DEL
                    temp=temp+1;
                }
            }
        }
    }
    printf("%d",kiss);
    return 0;
}
