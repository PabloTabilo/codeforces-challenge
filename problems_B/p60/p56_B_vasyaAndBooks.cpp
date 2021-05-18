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

int main(){
    int n, a, b;
    cin>>n;
    //int A[n]; 
    int B[n];
    int C[200001]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        //A[i]=a;
        C[a]=i+1;
    }
    for(int i=0;i<n;i++){
        cin>>b;
        B[i]=b;
    }
    int j=0;
    int lr=0;
    int cv, pv, res;
    while(j<n){
        cv=C[B[j]];
        if(j!=0){
            if(lr==0){
                pv=C[B[j-1]];
            }else{
                pv=lr;
                lr=0;
            }
            res = cv-pv;
            if(res>0){
                cout<<res<<" ";
            }else{
                lr=pv;
                cout<<0<<" ";
            }
        }else
            cout<<cv<<" ";
        j++;
    }
    return 0;
}

