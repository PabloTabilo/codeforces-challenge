#include <iostream>
#include <unordered_map>

using namespace std;


int main(){

    int t, n, num;
    cin>>t;
    while(t--){
        cin>>n;
        int A[n];
        int mxRep = -2, totDif = 0, moreRepId=0, res;
        unordered_map<int, int> um;
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            A[i] = num;
            um[A[i]]++;
            if(mxRep < um[A[i]]){
                mxRep = um[A[i]];
                moreRepId = num;
            }
        }
        for(unordered_map<int,int>::iterator it = um.begin(); it != um.end(); it++){
            if(it->first != moreRepId){
                totDif++;
            }
        }
        res = mxRep;
        if(totDif != mxRep){
            if(totDif < mxRep){
                totDif++;
                mxRep--;
                res = min(totDif, mxRep);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
