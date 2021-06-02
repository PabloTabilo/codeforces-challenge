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

void pV(vector<pair<int, int> > V, int n){
    cout<<endl;
    vector<pair<int, int> >::iterator it;
    for(it = V.begin(); it!=V.end(); it++)
        cout<<"first: "<<it->first<<" second: "<<it->second<<endl;
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
    int t, n, a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cin>>t;
    while(t--){
        cin>>n;
        int realSize=2*n;
        stack<int> se, so;
        for(int i=0;i<realSize;i++){
            cin>>a;
            if(a>1 && a%2==0)
                se.push(i+1);
            else
                so.push(i+1);
        }
        int f1, f2, c = 0;
        while(!se.empty() && c<n-1){
            f1 = se.top();
            se.pop();
            if(!se.empty()){
                f2 = se.top();
                se.pop();
                c++;
                cout<<f1<<" "<<f2<<endl;
            }else
                break;
        }
        while(!so.empty() && c<n-1){
            f1 = so.top();
            so.pop();
            if(!so.empty()){
                f2 = so.top();
                so.pop();
                c++;
                cout<<f1<<" "<<f2<<endl;
            }else
                break;
        }

    }
    return 0;
}

