#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    int a, b;
    int res = 0;
    int maxRes = 0;
    while(n--){
        cin>>a>>b;
        res += b - a;
        maxRes = max(maxRes, res);
    }
    cout<<maxRes<<endl;
    return 0;
}
