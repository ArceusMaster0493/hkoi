#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    cin>>sum;
    int left,consist[n];
    left=sum;
    for(int i=0;i<n-1;i++){
        consist[i]=i+1;
        left=left-(i+1);
    }
    consist[n-1]=left;
    if(!(consist[n-1]>n-1)){
        int change=consist[n-1]+1;
        consist[n-1]=consist[n-1]-change;
        consist[n-2]=consist[n-2]+change;
    }else if(consist[n-1]==0){
        consist[n-2]=consist[n-2]+1;
        consist[n-1]=-1;
    }
    for(int i=0;i<n;i++){
        cout<<consist[i]<<" ";
    }
    return 0;
}
