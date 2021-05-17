#include<iostream>

using namespace std;

int main(){
    int t;
    long long int s;
    cin>>t;
    while(t--){
        cin>>s;
        long long int x=s;
        while(s>=10){
            x+=s/10;
            s = s/10 + s%10;
        }
        cout<<x<<endl;
    }
    return 0;
}
