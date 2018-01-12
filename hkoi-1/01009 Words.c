#include<stdio.h>
int main(){
    char c;
    do{
        c = getchar();
        if((c>64&&c<91)||(c>96&&c<123)||c=='\n'||c==' '){
            printf("%c",c);
        }
    }while(c!=EOF);
    return 0;
}
