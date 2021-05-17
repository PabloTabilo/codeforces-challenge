#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t, n, num;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++){
            cin>>num;
            v1[i]=num;
        }
        sort(v1.begin(), v1.end(), greater<int>());
        int res=99999;
        for(int i=1;i<n;i++){
            res=min(res, abs(v1[i-1] - v1[i]));
        }
        cout<<res<<endl;
    }
    return 0;
}
