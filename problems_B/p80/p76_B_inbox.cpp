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
    int n, ni;
    cin>>n;
    int res=0, reco=0;
    bool f1=false;
    for(int i = 0;i < n; i++){
        cin>>ni;
        if(ni == 1 && !f1){
            f1 = true;
            res++;
        }else if (f1){
            if(ni==1){
                res++;
                if(reco > 1)
                    res++;
                else if(reco == 1)
                    res++;
                reco = 0;
            }else{
                reco++;
            }
        }
        //cout<<"ni: "<<ni<<" ; res: "<<res<<" ; reco: "<<reco<<endl;
    }
    cout<<res<<endl;
    return 0;
}

