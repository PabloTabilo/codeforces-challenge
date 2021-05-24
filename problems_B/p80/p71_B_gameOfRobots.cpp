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
    ll n, id=1;
    ll k, bn, nt;
    //ll cont=1;
    cin>>n>>k;
    ll *p = new ll[n+1];
    for(int i=1;i<n+1;i++){
        cin>>id;
        p[i] = id;
    }
    if (n%2==0)
        bn = (n+1) * (n/2);
    else
        bn = n * ((n+1)/2);
    if (k <= bn){
        id = 1;
        while (k > id){
            k -= id;
            id++;
            if(id > n)
                id = n;
        }
        //cout<<k<<endl;
        id = k;
    }else{
        id = (k%n==0?n:k%n);
    }
    //cout<<"id: "<<id<<endl;
    cout<<p[id]<<endl;
    return 0;
}

