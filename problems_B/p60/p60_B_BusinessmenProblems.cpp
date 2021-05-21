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

int main(){
    int n, m;
    unordered_map<int, int> un;
    unordered_map<int, int> um;
    unordered_map<int, bool> match;
    vector<int> v1;
    int a, x;
    //int tn=0,tm=0;
    ll tot=0;
    cin>>n;
    while(n--){
        cin>>a>>x;
        un[a]=x;
        //tn+=x;
        tot+=x;
        match[a]=true;
    }
    cin>>m;
    while(m--){
        cin>>a>>x;
        um[a]=x;
        //tm+=x;
        tot+=x;
        if(match[a])
            v1.push_back(a);
    }
    int n_m=v1.size();
    //int tot=tn+tm;
    for(int i =0;i<n_m;i++){
        if(un[v1[i]] > um[v1[i]])
            tot-=um[v1[i]];
        else
            tot-=un[v1[i]];
    }
    cout<<tot<<endl;
    return 0;
}

