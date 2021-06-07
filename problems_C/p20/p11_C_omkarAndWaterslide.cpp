#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

typedef long long int ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll res = 0;
        ll cero = 0;
        vector<ll> A(n);
        for(int i = 0; i < n; i++){
            cin>>A[i];
            if(i > 0)
                res += max(A[i-1] - A[i], cero);
        }
        cout<<res<<endl;
    }
    return 0;
}
