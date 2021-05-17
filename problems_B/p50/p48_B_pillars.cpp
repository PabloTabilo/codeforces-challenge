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
    int n,a;
    cin>>n;
    int idxMax=0;
    int maxN=0;
    bool poss=true;
    int *p = new int[n];
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>maxN){
            maxN=a;
            idxMax=i;
        }
        p[i]=a;
    }
    for(int i=idxMax+1;i<n-1;i++){
        if(p[i]<p[i+1]){
            poss=false;
            break;
        }
    }
    for(int i=idxMax-1;i>0;i--){
        if(p[i]<p[i-1]){
            poss=false;
            break;
        }
    }
    if(poss)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}

