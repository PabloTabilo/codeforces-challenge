#include<iostream>

using namespace std;

int main(){
    int q;
    int n, k, a;
    cin>>q;
    while(q--){
        cin>>n>>k;
        int minV=100000001;
        int maxV=-1;
        int res=-1;
        for(int i=0;i<n;i++){
            cin>>a;
            maxV=max(maxV,a);
            minV=min(minV,a);
        }
        if(maxV-k<=minV+k){
            res=minV+k;
        }
        cout<<res<<endl;
    }
    return 0;
}
