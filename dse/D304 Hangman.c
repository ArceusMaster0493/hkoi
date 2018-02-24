#include<stdio.h>
#include<string.h>
int main(){
    int i,end=1;
    char word[21],input;
    scanf("%s",word);
    char display[21];
    strcpy(display,word);
    for(i=0;i<strlen(word);i++){
        display[i]='_';
    }
    do{
        end=1;
        scanf(" %c",&input);
        for(i=0;i<strlen(word);i++){
            if(word[i]==input){
                display[i]=input;
            }
            if(display[i]=='_'){
                end=0;
            }
        }
        printf("%s",display);
        if(end==0){
            printf("\n");
        }
    }while(end==0);
    return 0;
}
