#include <stdio.h>
int main(){
    int ya,ma,da,yb,mb,db;
    scanf("%d%d%d",&ya,&ma,&da);
    scanf("%d%d%d",&yb,&mb,&db);
    if(ya<yb){
        printf("Before");
    }
    else if(ya>yb){
        printf("After");
    }
    else{
        if(ma<mb){
            printf("Before");
        }
        else if(ma>mb){
            printf("After");
        }
        else{
            if(da<db){
                printf("Before");
            }
            else if(da>db){
                printf("After");
            }
            else
                printf("Same");
        }
    }
    return 0;
}
