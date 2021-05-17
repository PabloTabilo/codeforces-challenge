#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a, b;
    priority_queue<int> pq;
    unordered_map<int, vector<int> > umap;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        pq.push(b);
        umap[b].push_back(a);
    }
    int res=0;
    int bestVal;
    int numBestVal;
    while(n>0&&!pq.empty()){
        bestVal = pq.top();
        numBestVal = umap[pq.top()].back();
        //cout<<"priorityVal: "<<pq.top()<<endl;
        //cout<<"key: "<<umap[pq.top()].back()<<endl;
        if(n > numBestVal){
            n-=numBestVal;
            res+=numBestVal*bestVal;
        }else{
            res += n*bestVal;
            n = 0;
        }
        umap[pq.top()].pop_back();
        pq.pop();
    }
    cout<<res<<endl;
    return 0;
}
