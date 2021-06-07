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
    int n, m;
    bool res = true;
    cin>>n>>m;
    if(m>0){
        vector<int> A(m);
        for(int i = 0; i<m;i++)
            cin>>A[i];
        sort(A.begin(), A.end());
        if(A[m-1] == n || A[0] == 1){
            res = false;
        }else{
            int cont = 1;
            for(int i = 1; i<m; i++){
                if(A[i]-A[i-1] == 1)
                    cont++;
                else
                    cont = 1;
                if(cont==3){
                    res = false;
                    break;
                }
            }
        }
    }
    if(res)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}

