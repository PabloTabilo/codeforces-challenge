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
    ll n,a,m,k;
    cin>>n>>m>>k;
    priority_queue< ll > pq;
    for(int i=0;i<n;i++){
        cin>>a;
        pq.push(a);
    }
    ll maxVal1=pq.top();
    ll res=pq.top()*k;
    pq.pop();
    res+=pq.top();
    cout<<res*(m/(k+1)) + maxVal1*(m%(k+1))<<endl;
    return 0;
}

