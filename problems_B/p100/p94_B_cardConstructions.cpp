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

void pAr(int A[], int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
ll A[100001] = {0};

int givePos(ll A[], int n){
    int i = 1;
    while(n>=A[i]){
        i++;
    }
    return i-1;
}

int main(){
    A[1] = 2;
    A[2] = 7;
    ll i = 3;
    while(i < 100001){
        A[i] = (i*(i+1)) + ((i-1)*i)/2;
        i++;
    }
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        i = givePos(A, n);
        int c_py=0;
        while(n>0&&i>=1){
            n = n - A[i];
            c_py++;
            if(n%A[i]==0 && n>=A[i])
                continue;
            else
                i = givePos(A, n);
        }
        cout<<c_py<<endl;
    }
    return 0;
}

