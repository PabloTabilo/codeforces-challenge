#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int y;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>y;
        if(y+k<=5)
            res++;
    }
    cout<<res/3<<endl;
    return 0;
}
