#include<iostream>

using namespace std;

int main(){
    int t;
    int n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int res=n;
        n-=(n/k)*k;
        if(n%k!=0 && n>=k/2){
            n-=k/2;
        }else if(n<k/2){
            n=0;
        }
        res-=n;
        cout<<res<<endl;
    }
    return 0;
}
