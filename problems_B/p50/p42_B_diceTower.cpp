#include<iostream>
typedef long long ll;
using namespace std;

int main(){
    int t;
    ll x;
    cin>>t;
    while(t--){
        cin>>x;
        int A[6]={20,19,18,17,16,15};
        bool isPossible=false;
        for(int i=0;i<6;i++){
            //cout<<x-A[i]<<endl;
            //cout<<(x-A[i])%14<<endl;
            //cout<<"---------"<<endl;
            if(x-A[i]==0){
                isPossible=true;
                break;
            }else if(x-A[i]>0&&(x-A[i])%14==0){
                isPossible=true;
                break;
            }
        }
        if (isPossible)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
