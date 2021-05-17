#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int t, n, a;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue <int> pq;
        int A[2*n];
        for(int i=0;i<n*2;i++){
            cin>>a;
            pq.push(a);
            A[i]=0;
        }
        int i=0;
        while(!pq.empty()){
            A[i]=pq.top();
            pq.pop();
            i++;
        }
        cout<<abs(A[n-1]-A[n])<<endl;
    }
    return 0;
}
