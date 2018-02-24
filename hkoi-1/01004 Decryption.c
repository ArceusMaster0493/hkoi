#include<stdio.h>
typedef struct map{
    char character;
    int index;
}map;
int main(){
    int i;
    long int encryptionKey;
    char inputChar;
    map keys[27];
    keys[0].character=' ';
    scanf("%d",&keys[0].index);
    for(i=1;i<27;i++){
        keys[i].character=(char)64+i;
        scanf("%d",&keys[i].index);
    }
    getchar();         //getting a useless newline
    do{
        // start of read
        char encryptedMsg[300000]="";
        do{
            inputChar=getchar();
            if(inputChar==EOF){
                return 0;
            }
        }while(inputChar==' '||inputChar=='\n');
        i=0;
        do{
            encryptedMsg[i]=inputChar;
            i=i+1;
            inputChar=getchar();
        }while(!(inputChar>47&&inputChar<58));
        char encryptionKeyChar[11]="";
        i=0;
        do{
            encryptionKeyChar[i]=inputChar;
            i=i+1;
            inputChar=getchar();
        }while(inputChar>47&&inputChar<58);
        encryptionKey=atoi(encryptionKeyChar);
        int encryptedMsgLength=strlen(encryptedMsg);
        i=1;
        while(encryptedMsg[encryptedMsgLength-i]<'A'||encryptedMsg[encryptedMsgLength-i]>'Z'){
            encryptedMsg[encryptedMsgLength-i]='\0';
            i=i+1;
        }
        // end of read
        // start of calculation
        encryptedMsgLength=strlen(encryptedMsg);
        printf("[");
        for(i=0;i<encryptedMsgLength;i++){
            int decryptedIndex=((keys[encryptedMsg[i]-64].index-encryptionKey)+1999999998)%27;
            printf("%c",keys[decryptedIndex].character);
        }
        printf("]\n");
        // end of calculation
    }while(1==1);
}
