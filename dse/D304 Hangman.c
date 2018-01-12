#include<stdio.h>
#include<string.h>
int main(){
    int i,end=1;
    char word[21],input;
    scanf("%s",word);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    char display[21];
    strcpy(display,word);
    for(i=0;i<strlen(word);i++){
        display[i]='_';
    }
    do{
        end=1;
        fflush(stdin);
        scanf("%c",&input);
        for(i=0;i<strlen(word);i++){
            if(word[i]==input){
                display[i]=input;
            }else if(display[i]=='_'){
                end=0;
            }
        }
        printf("%s\n",display);
    }while(end==0);
    return 0;
}
