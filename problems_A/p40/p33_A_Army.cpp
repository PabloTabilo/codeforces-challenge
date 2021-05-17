#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int d[101]={0};
    int x;
    for(int i=2;i<n+1;i++){
        cin>>x;
        d[i] = x + d[i-1];
    }
    int a, b;
    cin>>a>>b;
    //cout<<d[b]<<endl;
    //cout<<d[a]<<endl;
    int res = d[b] - d[a];
    cout<<res<<endl;
    return 0;
}
