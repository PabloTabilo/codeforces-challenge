#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int remainder = 240 - k;
    int res=0;
    int resMin=0;
    for(int i=1;i<n+1;i++){
        resMin+=5*i;
        if(resMin>remainder)
            break;
        res++;
    }
    cout<<res<<endl;
    return 0;
}
