#include<iostream>

using namespace std;

int main(){
    int n, h;
    cin>>n>>h;
    int x;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>h)
            res+=2;
        else
            res++;
    }
    cout<<res<<endl;
    return 0;
}
