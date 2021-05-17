#include<iostream>

using namespace std;

int main(){
    unsigned long long int n, k;
    cin>>n>>k;
    //cout<<n%k<<endl;
    //cout<<n/k<<endl;
    if(n%k==0 && (n/k)%2==0 && k>1 && n>1){
        cout<<"NO";
    }else if(n%k==0 && (n/k)%2!=0 && k>1 && n>1){
        cout<<"YES";
    }else if(k==1){
        if(n%2==0 && n>1){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }else{
        if((n/k)%2!=0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    cout<<endl;
    return 0;
}
