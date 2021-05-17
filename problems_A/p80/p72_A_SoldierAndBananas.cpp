#include<iostream>

using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    int gW = (w * (w+1))/2;
    int res = k*gW - n;
    if(res<0)
        res=0;
    cout<<res<<endl;
    return 0;
}
