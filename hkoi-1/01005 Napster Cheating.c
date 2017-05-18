//unfinished
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[99],tmp[2];
    scanf("%[^.mp3]s",&s);
    for(i=0;i<99;i++){
        tmp[0]=s[i];

        s[strlen(s)-1]=tmp[0];
    }
    return 0;
}
