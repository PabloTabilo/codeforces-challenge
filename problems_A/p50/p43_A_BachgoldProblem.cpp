#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    bool pair2=false;
    if(n%2==0){
        res = n/2;
        pair2=true;
    }else{
        res = (n/2) - 1;
    }
    if(!pair2){
        cout<<res+1;
    }else{
        cout<<res;
    }
    cout<<endl;
    for(int i=0;i<res;i++)
        cout<<2<<" ";
    if(!pair2){
        cout<<3;
    }
    cout<<endl;
    return 0;
}
