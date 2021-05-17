#include<iostream>

using namespace std;

int main(){
    int k2, k3, k5, k6;
    cin>>k2>>k3>>k5>>k6;
    int min256, min32;
    min256 = min(min(k5,k6),k2);
    k2-=min256;
    k5-=min256;
    k6-=min256;
    min32 = min(k2,k3);
    k2-=min32;
    k3-=min32;
    cout<<256*min256 + 32*min32<<endl;
    return 0;
}
