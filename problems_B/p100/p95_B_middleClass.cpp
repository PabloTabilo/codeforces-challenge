#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<map>
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

void pV(vector<ll> V, int n){
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
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t, n; 
    ll x, a;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<ll> v1(n);
        ll aRes;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a;
            v1[i] = a;
        }
        if (n>1){
            sort(v1.begin(), v1.end(), greater<int>());
            for(int i = 1;i<n;i++){
                v1[i] = v1[i] + v1[i-1];
            }
        }    
        //pV(v1, n);
        int i=n-1;
        while(i>=0){
            aRes = v1[i]/(i+1);
            //cout<<"i: "<<i<<" aRes: "<<aRes<<endl;
            if(x<=aRes && c <= i+1){
                c = i+1;
            }
            i--;
        }
        cout<<c<<endl;
    }
    return 0;
}

