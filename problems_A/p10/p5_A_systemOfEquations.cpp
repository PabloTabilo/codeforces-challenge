#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int res = ((n*n)-m>=0?1:0);
    cout<<res<<'\n';
    return 0;
}
