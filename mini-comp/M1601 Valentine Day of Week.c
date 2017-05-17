#include <stdio.h>
int main(){
    int year,checker,day=1;
    char daylist[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    scanf("%d",&year);
    for(checker=2000;checker<year;++checker)
    {
        if(checker%400==0||checker%4==0&&checker%100!=0)
        {
            ++day;
            ++day;
        }
        else
        {
            ++day;
        }
    }
    day=day%7;
    printf("%s\n", daylist[day]);
    return 0;
}
