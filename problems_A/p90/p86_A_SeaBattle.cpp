#include<iostream>

using namespace std;

int main(){
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    int res = 2 * (w1 + h1 + h2) + 4;
    cout<<res<<endl;
    return 0;
}
