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

void prV(vector<int> A, int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, k;
    cin>>n>>k;
    cin.ignore();
    int a;
    vector <int> A;
    while(cin>>a){
        A.push_back(a);
    }
    if (n>1){
        for(int i=0;i<n-1;i++){
            if(A[i]+A[i+1]<k){
                if(A[i]>=A[i+1]){

                }
            }
        }
    }else{
        if (A[0]>=k)
            cout<<0<<endl;
    }
    prV(A,n);
    return 0;
}

