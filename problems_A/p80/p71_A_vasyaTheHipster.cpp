#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int pf=min(a,b);
    a -= pf;
    b -= pf;
    int sp=(a/2)+(b/2);
    cout<<pf<<" "<<sp<<endl;
    return 0;
}
