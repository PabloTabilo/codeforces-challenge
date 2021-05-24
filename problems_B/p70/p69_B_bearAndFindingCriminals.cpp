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
    int n, a, t;
    cin>>n>>a;
    int T[n];
    for(int i=0;i<n;i++){
        cin>>t;
        T[i]=t;
    }
    int i=a-2;
    int j=a;
    int res=T[a-1];
    while(i>=0 && j<n){
        //cout<<"i: "<<i<<endl;
        //cout<<"j: "<<j<<endl;
        //cout<<"cond: "<<(T[i]+T[j]>1?2:0)<<endl;
        res += (T[i] + T[j]>1?2:0);
        i--;
        j++;
    }
    while(i>=0){
        res += T[i];
        i--;
    }
    while(j<n){
        res += T[j];
        j++;
    }
    cout<<res<<endl;
    return 0;
}

