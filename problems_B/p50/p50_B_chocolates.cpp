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
    ll n, a;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++){
        cin>>a;
        A[i]=a;
    }
    ll res=A[n-1], lastV;
    for(int i=n-2;i>=0;i--){
        //cout<<"A[i]: "<<A[i]<<endl;
        //cout<<"res: "<<res<<endl;
        if(A[i]<A[i+1]){
            res+=A[i];
            lastV=A[i];
        }else{
            A[i]=A[i+1]-1;
            res+=A[i+1]-1;
            lastV=A[i+1]-1;
        }
        if(lastV-1<=0)
            break;
    }
    cout<<res<<endl;
    return 0;
}

