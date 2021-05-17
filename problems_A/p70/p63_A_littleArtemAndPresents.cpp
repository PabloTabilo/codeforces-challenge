#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int res = 2*(n/3) +(n%3!=0?1:0);
    cout<<res<<endl;
    return 0;
}
