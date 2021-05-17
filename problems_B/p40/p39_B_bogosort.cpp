#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t, n, a;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue <int> pq;
        for(int i=0;i<n;i++){
            cin>>a;
            pq.push(a);
        }
        int v;
        while(!pq.empty()){
            v = pq.top();
            pq.pop();
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}
