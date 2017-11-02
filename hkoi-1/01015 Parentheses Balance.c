#include<stdio.h>
int main(){
    int pilepointer=-1,mismatchfound=0,i;
    char line[10001],pile[10001];
    gets(line);
    i=0;
    while(line[i]!='\0'&&mismatchfound==0){
        switch(line[i]){
        case '(':
            pilepointer=pilepointer+1;
            pile[pilepointer]='(';
            break;
        case '[':
            pilepointer=pilepointer+1;
            pile[pilepointer]='[';
            break;
        case '{':
            pilepointer=pilepointer+1;
            pile[pilepointer]='{';
            break;
        case ')':
            if(pile[pilepointer]=='('){
                pile[pilepointer]=='\0';
                pilepointer=pilepointer-1;
                break;
            }
            else{
                mismatchfound=1;
                break;
            }
        case ']':
            if(pile[pilepointer]=='['){
                pile[pilepointer]=='\0';
                pilepointer=pilepointer-1;
                break;
            }
            else{
                mismatchfound=1;
                break;
            }
        case '}':
            if(pile[pilepointer]=='{'){
                pile[pilepointer]=='\0';
                pilepointer=pilepointer-1;
                break;
            }
            else{
                mismatchfound=1;
                break;
            }
        }
        i++;
    }
    if(pilepointer!=-1){
        mismatchfound=1;
    }
    if(mismatchfound==1){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}
