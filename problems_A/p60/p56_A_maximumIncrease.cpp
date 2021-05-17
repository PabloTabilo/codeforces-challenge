#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int x;
    int last_x;
    int res=1;
    int maxRes=1;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0){
            last_x=x;
        }else{
            if(last_x < x){
                res++;
            }else
                res=1;
            maxRes=max(maxRes, res);
            last_x=x;
        }
    }
    cout<<maxRes<<endl;
    return 0;
}
