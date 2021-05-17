#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int cA[n];
        int minA = 1000000001;
        
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            minA=min(minA, x);
            A[i]=x;
            cA[i]=0;
        }

        int B[n];
        int cB[n];
        int minB = 1000000001;
        for(int i=0;i<n;i++){
            cin>>x;
            minB=min(minB, x);
            B[i]=x;
            cB[i]=0;
        }
        long long int res=0;
        for(int i=0;i<n;i++){
            cB[i]=B[i] - minB;
            cA[i]=A[i] - minA;
            res += max(cB[i], cA[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
