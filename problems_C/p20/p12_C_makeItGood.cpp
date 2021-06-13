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

int feasible(vector<int> v, bool debug){
    int n = v.size();
    stack<int> s;
    int i = 0;
    int j = n-1;
    while(i<=j){
       if (debug) cout<<"v[i]: "<<v[i]<<"; v[j]: "<<v[j]<<endl;
        if(i == j){
            if(s.empty()){
                s.push(v[i]);
            }else{
                if(s.top()<= v[i]){
                    s.push(v[i]);
                }else break;
            }
            //i++;
        }else{
            if(v[i]<= v[j]){
                if(s.empty()){
                    s.push(v[i]);
                    s.push(v[j]);
                }else{
                    if(s.top()<=v[i]){
                        s.push(v[i]);
                        s.push(v[j]);
                    }else break;
                }
            //i++;
            }else{
                if(s.empty()){
                    s.push(v[j]);
                    s.push(v[i]);
                }else{
                    if(s.top()<=v[j]){
                        s.push(v[j]);
                        s.push(v[i]);
                    }else break;
                }
            //j--;
            }
        }
        i++;
        j--;
    }
    return s.size();
}

int main(){
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t, n;
    bool debug = true;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i<n; i++){
            cin>>A[i];
        }
        int pos = n-1;
        while(pos > 0 && A[pos-1]>=A[pos]) --pos;
        while(pos > 0 && A[pos-1]<=A[pos]) --pos;
        cout<<pos<<endl;
    }
    return 0;
}

