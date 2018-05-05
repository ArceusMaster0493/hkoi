#include <stdio.h>
#include <string.h>
int main(){
    int i,j,count1=0,count2=0,ss;
    char string[50],substring[50];
    scanf("%s",string);
    scanf("%s",substring);
    for(i=0;i<strlen(string);i++){
        ss=0;
        if(string[i]==substring[0]){
            ss=1;
            for(j=1;j<strlen(substring);j++){
                if(string[i+j]!=substring[j]){
                    ss=0;
                    break;
                }
            }
        }
        if(ss==1){
            count1=count1+1;
        }
    }
    for(i=0;i<strlen(string);i++){
        ss=0;
        if(string[i]==substring[0]){
            ss=1;
            for(j=1;j<strlen(substring);j++){
                if(string[i+j]!=substring[j]){
                    ss=0;
                    break;
                }
            }
        }
        if(ss==1){
            count2=count2+1;
            i=i+strlen(substring)-1;
        }
    }
    printf("%d\n",count1);
    printf("%d\n",count2);
    return 0;
}
