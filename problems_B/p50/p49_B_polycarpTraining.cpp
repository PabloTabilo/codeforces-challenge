#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<math.h>
#include<limits>
#include<iomanip>

#define MEM(a, b) memset(a, (b), sizeof(a))

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;

int main(){
    int n,a;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > pq;
    bool A[200001]={false};
    int res=0;
    //int tot=0;
    for(int i=0;i<n;i++){
        cin>>a;
        //s.insert(a);
        if(!A[a]){
            A[a]=true;
            res++;
        }
        else
            pq.push(a);
        //tot+=a;
    }
    int i=1;
    int v;
    while(i<n+1){
        if(!A[i]&&!pq.empty()){
            v=pq.top();
            while(v<i && !pq.empty()){
                pq.pop();
                v=pq.top();
            }
            if(v>=i){
                res++;
                pq.pop();
            }
        }
        i++;
    }
    //int resOpti=0;
    //int resCanbe=0;
    //for(int i=1;i<n+1;i++){
    //    if(A[i])
    //        resOpti++;
    //    else
    //        resCanbe++;
    //}

    cout<<res<<endl;
    //cout<<s.size()<<endl;
    return 0;
}

