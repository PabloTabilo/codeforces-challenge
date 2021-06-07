#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<stack>
#include<set>
#include<vector>
#include<utility>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        bool Ab[51] = {false};
        vector<int> vu;
        vector<pair<int,int> >v;
        unordered_map<int, int> um;
        for(int i = 0; i<n;i++){
            scanf("%d", &A[i]);
            if(!Ab[A[i]])
                vu.push_back(A[i]);
            Ab[A[i]] = true;
        }
        vector<int>::iterator it = vu.begin();
        for(; it!=vu.end();it++){
            int fv = *it;
            vector<int>::iterator it2 = it;
            for(;it2!=vu.end();it2++){
                int sv = *it2;
                //cout<<"fv: "<<fv<<"; sv: "<<sv<<endl;
                pair<int, int> p;
                p.first = fv;
                p.second = sv;
                v.push_back(p);
                um[fv+sv] = 0;
            }
        }
        //cout<<endl;
        int res = 0;
        int i = 0;
        int n_v = v.size();
        bool mypair = false;
        while(i < n_v){
            pair<int,int> p = v[i];
            int j = 0;
            int rest = 0;
            for(int l=0;l<51;l++)
                Ab[l]=false;
            //cout<<"---------"<<endl;
            while(j<n){
                if(!mypair && !Ab[j] && (A[j] == p.first)){
                    //cout<<"j: "<<j;
                    //cout<<"; A[j]: "<<A[j];
                    Ab[j] = true;
                    mypair = true;
                }
                int k = 0;
                while(k<n && mypair){
                    if(mypair && !Ab[k] && (A[k] == p.second)){
                        //cout<<"; k: "<<k;
                        //cout<<"; A[k]: "<<A[k]<<endl;
                        Ab[j] = true;
                        Ab[k] = true;
                        um[A[j]+A[k]]++;
                        res = max(res, um[A[j]+A[k]]);
                        mypair = false;
                    }
                    k++;
                }
                j++;
            }
            mypair = false;
            i++;
        }
        //cout<<endl;
        cout<<res<<endl;
        //for(auto x: um)
        //    cout<<"K: "<<x.first<<"; v: "<<x.second<<endl;
    }

    return 0;
}
