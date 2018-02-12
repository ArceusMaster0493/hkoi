#include<stdio.h>
char board[3][3];
int main(){
    int i,j,A,B;
    for(i=0;i<3;i++){
        scanf(" %s",&board[i]);
    }
    for(i=0;i<3;i++){
        A=0;
        B=0;
        for(j=0;j<3;j++){
//            printf("ROUTINE 1 > ENTERED [%d] [%d]\n",i,j);             //DEL
            if(board[i][j]=='X'){
                A=A+1;
//                printf("ROUTINE 1 > X\n");             //DEL
            }else if(board[i][j]=='O'){
                B=B+1;
//                printf("ROUTINE 1 > O\n");             //DEL
            }
        }
        if(A==3){
//            printf("ROUTINE 1 > A=3\n");             //DEL
            printf("X wins\n");
            return 0;
        }else if(B==3){
//            printf("ROUTINE 1 > B=3\n");             //DEL
            printf("O wins\n");
            return 0;
        }
    }
    for(i=0;i<3;i++){
        A=0;
        B=0;
        for(j=0;j<3;j++){
//            printf("ROUTINE 2 > ENTERED [%d] [%d]\n",j,i);             //DEL
            if(board[j][i]=='X'){
                A=A+1;
//                printf("ROUTINE 2 > X\n");             //DEL
            }else if(board[j][i]=='O'){
                B=B+1;
//                printf("ROUTINE 2 > O\n");             //DEL
            }
        }
        if(A==3){
//            printf("ROUTINE 2 > A=3\n");             //DEL
            printf("X wins\n");
            return 0;
        }else if(B==3){
//            printf("ROUTINE 2 > B=3\n");             //DEL
            printf("O wins\n");
            return 0;
        }
    }
    A=0;
    B=0;
    for(i=0;i<3;i++){
//        printf("ROUTINE 3 > ENTERED [%d] [%d]\n",i,i);             //DEL
        if(board[i][i]=='X'){
//            printf("ROUTINE 3 > X\n");             //DEL
            A=A+1;
        }else if(board[i][i]=='O'){
//            printf("ROUTINE 3 > O\n");             //DEL
            B=B+1;
        }
    }
    if(A==3){
//            printf("ROUTINE 3 > A=3\n");             //DEL
        printf("X wins\n");
        return 0;
    }else if(B==3){
//            printf("ROUTINE 3 > B=3\n");             //DEL
        printf("O wins\n");
        return 0;
    }
//    printf("ROUTINE 4 > ENTERED [%d] [%d]\n",i,2-i);             //DEL
    A=0;
    B=0;
    for(i=0;i<3;i++){
        if(board[i][2-i]=='X'){
            A=A+1;
//            printf("ROUTINE 4 > X\n");             //DEL
        }else if(board[i][2-i]=='O'){
            B=B+1;
//            printf("ROUTINE 4 > O\n");             //DEL
        }
    }
    if(A==3){
//            printf("ROUTINE 4 > A=3\n");             //DEL
        printf("X wins\n");
        return 0;
    }else if(B==3){
//            printf("ROUTINE 4 > B=3\n");             //DEL
        printf("O wins\n");
        return 0;
    }
    int empty=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(board[i][j]=='.'){
                empty=1;
                break;
            }
        }
    }
    if(empty==0){
        printf("Draw\n");
    }else{
        printf("Not ended\n");
    }
    return 0;
}
