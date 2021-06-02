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

int main(){
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, a, b;
    cin>>t;
    while(t--){
        cin>>n;
        int A[n], B[n];
        int pos1=100001, posm1=100001;
        for(int i=0;i<n;i++){
            cin>>a;
            A[i] = a;
            if(pos1==100001 && a==1)
                pos1 = i;
            if(posm1==100001 && a==-1)
                posm1=i;
        }
        for(int i=0;i<n;i++){
            cin>>b;
            B[i] = b;
        }
        int i = 0;
        bool pos = true;
        //cout<<"pos1: "<<pos1<<" posm1: "<<posm1<<endl;
        while(i < n){
            if(i==0 && A[i] != B[i]){
                pos = false;
                break;
            }else if(i > 0 && A[i] != B[i]){
                //cout<<"i: "<<i<<" B[i]: "<<B[i]<<endl;
                if(B[i]>0 && i<=pos1){
                    pos =false;
                    break;
                }else if(B[i]<0 && i<=posm1){
                    pos = false;
                    break;
                }
                if(B[i]==0 && A[i]==1 && i<posm1){
                    pos = false;
                    break;
                }else if(B[i]==0 && A[i]==-1 && i<pos1){
                    pos = false;
                    break;
                }
            }
            i++;
        }
        if(pos)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}

