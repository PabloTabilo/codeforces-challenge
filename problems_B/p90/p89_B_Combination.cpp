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
#include<sstream>

#define MEM(a, b) memset(a, (b), sizeof(a))
#define _USE_MATH_DEFINES
#define PI 3.1415926535897932384626433832795

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void pV(vector<int> V, int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

void pAr(int A[], int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main(){
    int n, a, b;
    priority_queue<pair<int, int> > pq;
    vector<int> v;
    pair <int, int> p;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a>>b;
        p.first = b;
        p.second = a;
        pq.push(p);
    }
    int nt = 1;
    int res = 0;
    int tp = -1;
    bool foundNotb = false;
    while(!pq.empty()){
        p = pq.top();
        tp = p.first;
        if(tp == 0 && !foundNotb){
            foundNotb = true;
        }else if(tp != 0 && !foundNotb){
            nt--;
            nt += p.first;
            res += p.second;
        }
        if(foundNotb){
            v.push_back(p.second);
        }
        pq.pop();
    }
    sort(v.begin(), v.end(), greater<int>());
    int s = (v.size()<=nt?v.size():nt);
    for(int i=0;i<s;i++){
        res += v[i];
    }
    cout<<res<<endl;
    return 0;
}

