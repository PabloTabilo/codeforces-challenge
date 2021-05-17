#include<iostream>
#include<queue>
#include<unordered_map>
#include<set>

using namespace std;

int main(){
    int t, n, a;
    cin>>t;
    while(t--){
        cin>>n;
        unordered_map<int,int> umap;
        set <int> s1;
        for(int i=0;i<n;i++){
            cin>>a;
            umap[a]++;
            s1.insert(a);
        }
        priority_queue <int, vector<int>, greater<int> > pq;
        set <int>::iterator it;
        for(it=s1.begin();it!=s1.end();it++){
            pq.push(*it);
        }
        int v;
        int numV;
        int res=0;
        int grannies=0;
        while(!pq.empty()){
            v = pq.top();
            pq.pop();
            numV = umap[v];
            grannies += numV;
            //cout<<"v: "<<v<<endl;
            //cout<<"numV: "<<numV<<endl;
            //cout<<"grannies: "<<grannies<<endl;
            if(v<=grannies){
                res=grannies;
            }
            //cout<<"res: "<<res<<endl;
            //cout<<"----------------------"<<endl;
        }
        cout<<res+1<<endl;
    }
    return 0;
}
