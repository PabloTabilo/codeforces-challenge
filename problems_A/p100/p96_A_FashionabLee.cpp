#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%4==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
    return 0;
}
