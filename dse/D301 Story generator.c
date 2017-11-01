#include<stdio.h>
int main(){
    int i;
    char w[6][100];
    for(i=0;i<5;i++){
        gets(w[i]);
    }
    printf("My name is %s.\n",w[0]);
    printf("I study at %s.\n",w[4]);
    printf("I go to school by %s with my classmate %s.\n",w[3],w[1]);
    printf("We both like %s.\n",w[2]);
    return 0;
}
