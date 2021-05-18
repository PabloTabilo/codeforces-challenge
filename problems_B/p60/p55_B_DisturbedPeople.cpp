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
    int n,a;
    cin>>n;
    int res=0;
    bool p=false, p1=false;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==0){
            p=true;
            A[i]=0;
        }else if(p && a==1){
            p1=true;
            A[i]=1;
        }else if(p1 && a==0){
            res++;
            A[i-1]=0;
            A[i]=0;
        }else{
            p=false;
            p1=false;
            A[i]=a;
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]==0 && i>0 && i<n-1 && A[i-1]==1 && A[i+1]==1){
            res++;
            A[i+1]=0;
        }
    }
    cout<<res<<endl;
    return 0;
}

