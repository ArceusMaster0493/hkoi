#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    cin>>sum;
    double left,consist[n+1];
    left=sum;
    for(int i=0;i<n-1;i++){
        consist[i]=i+1;
        left=left-(i+1);
    }
    consist[n-1]=left;
    if(!(left>n-1)&&left>0){
        double change=consist[n-1]+1;
        consist[n-1]=consist[n-1]-change;
        consist[n-2]=consist[n-2]+change;
    }
    if(n==1&&sum==0){
        cout<<"0";
    }
    else{
        for(int i=0;i<n;i++){
            cout<<fixed<<setprecision(0);
            cout<<consist[i]<<" ";
        }
    }
    return 0;
}
