#include <iostream>

using namespace std;

int main(){
    int t, n, x;
    int *ptr;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        int A[101]={0};
        int minRecord=999;
        int maxRecord=-1;
        for(int i=0; i<n; i++){
            cin>>x;
            minRecord = min(minRecord, x);
            maxRecord = max(maxRecord, x);
            A[x] = 1;
        }
        int res = 0;
        for(int i=minRecord; i<maxRecord+1;i++){
            if(A[i] == 1){
                res++;
            }
        }
        //cout<<minRecord<<endl;
        //cout<<maxRecord<<endl;
        //cout<<res<<endl;

        if(res != (maxRecord + 1 - minRecord))
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    
    }
    return 0;
}
