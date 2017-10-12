#include<stdio.h>
int main(){
    int n,c,i=0,j=0,a=0;
    char b[10],bb[2],y;
    FILE *fi,*fo;
    fi=fopen("count.in","r");
    fo=fopen("count.out","w");
    if(fi==NULL){
        perror("ERROR");
    }
    fscanf(fi,"%d %d",&n,&c);
    sprintf(bb,"%d",c);
    for(i=1;i<n+1;i++){
        sprintf(b,"%d",i);
        j=0;
        while(b[j]!='\0'){
            if(b[j]==bb[0]){
                a++;
            }
            j++;
        }
    }
    fprintf(fo,"%d",a);
    fclose(fi);
    fclose(fo);
    return 0;
}
