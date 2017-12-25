#include<stdio.h>
#include<string.h>
void stdize(char w[21]){
    int i,j,c=0;
    int s=strlen(w);
    for(i=s-1;i>-1;i--){
        if(w[i]<65||(w[i]>90&&w[i]<97)||w[i]>122){
            ++c;
            for(j=i;j<s-1;j++){
                w[j]=w[j+1];
            }
        }else if(w[i]>64&&w[i]<91){
            w[i]=w[i]+32;
        }
    }
    for(i=0;i<c;i++){
        w[s-c]='\0';
    }
}
int main(){
    char w1[21],w2[21],nw1[21],nw2[21];
    int i;
    scanf(" %s %s",w1,w2);
    strcpy(nw1,w1);
    strcpy(nw2,w2);
    stdize(nw1);
    stdize(nw2);
    int x=strcmp(nw1,nw2);
    if(x==0){
        printf("%s is equal to %s",w1,w2);
    }else if(x<0){
        printf("%s is less than %s",w1,w2);
    }else{
        printf("%s is greater than %s",w1,w2);
    }
    return 0;
}
