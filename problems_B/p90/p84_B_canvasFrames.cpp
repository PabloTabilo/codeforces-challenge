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
    int n, s;
    cin>>n;
    int A[101] = {0};
    for(int i=0;i<n;i++){
        cin>>s;
        A[s]+=1;
    }
    int res = 0;
    int p = 0;
    for(int i = 1; i<101; i++){
        A[i]/=2;
        if(A[i] == 1){
            p++;
        }else if(A[i]>1){
            res+=A[i];
        }
    }
    res += p;
    cout<<res/2<<endl;
    return 0;
}

