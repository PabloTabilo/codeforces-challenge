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
    int n, r;
    cin>>n;
    vector<int> v(n);
    double res = 0;
    for(int i = 0;i < n; i++){
        cin>>r;
        v[i] = r;
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0;i<n-1;i+=2){
        res += PI*(v[i]*v[i] - v[i+1]*v[i+1]);
    }
    if(n%2!=0 || n==1)
        res += v[n-1]*v[n-1]*PI;
    cout<<setprecision(11)<<res<<endl;
    cout<<fixed;
    return 0;
}

