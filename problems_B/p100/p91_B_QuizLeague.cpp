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
    // read & write file
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, a;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>a;
        A[i] = a;
    }
    bool notFound=true;
    int i = k-1;
    while(notFound){
        if(A[i]==1)
            notFound=false;
        else
            i++;
        if(i>=n)
            i = 0;
    }
    cout<<i+1<<endl;
    return 0;
}

