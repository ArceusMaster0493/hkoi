#include<stdio.h>
#include<string.h>
int main(){
    int i,ss;
    char string[51],newstring[51];
    scanf("%s",string);
    strcpy(newstring,string);
    ss=strlen(string);
    for(i=0;i<ss;i++){
        newstring[ss-1-i]=string[i];
    }
    printf("%s\n",newstring);
    if(strcmp(string,newstring)==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
