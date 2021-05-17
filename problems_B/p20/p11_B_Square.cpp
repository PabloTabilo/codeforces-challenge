#include<iostream>

using namespace std;

int main(){
    int t;
    int a1,b1,a2,b2;
    cin>>t;
    while(t--){
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(max(a1,b1) == max(a2,b2) && max(a1,b1) == (min(a1,b1)+min(a2,b2))){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
