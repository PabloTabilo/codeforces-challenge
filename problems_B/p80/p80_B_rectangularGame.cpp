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
    ll n, res, n2, n3, n5, n7;
    cin>>n;
    res = n;
    while(n>1 && n!=2 && n!=3 && n!=5 && n!=7){
        n2 = (n%2==0?n/=2:0);
        n3 = (n%3==0?n/=3:0);
        n5 = (n%5==0?n/=5:0);
        n7 = (n%7==0?n/=7:0);
        n = max(max(n2,n3), max(n5,n7));
        if(n == 0){
            break;
        }
        res+=n;
    }
    res++;
    cout<<res<<endl;
    return 0;
}

