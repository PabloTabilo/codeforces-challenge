#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    int res=0;
    while(a>0 && b>1 && c>3){
        res+=7;
        a-=1;
        b-=2;
        c-=4;
    }
    cout<<res<<endl;
    return 0;
}
