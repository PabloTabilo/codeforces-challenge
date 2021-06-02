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
    string t, s = "", s_p="";
    string temp;
    getline(cin, t);
    int n = t.size();
    for(int i = 0;i<n;i++){
        if(t[i] != 'a'){
            s_p+=t[i];
        }
    }
    s_p = s_p.substr(s_p.size()/2, s_p.size()/2);
    s = t.substr(0, n - s_p.size());
    string s_clean="";
    for(int i = 0;i<s.size();i++){
        if(s[i] != 'a'){
            s_clean += s[i];
        }
    }
    //cout<<"s: "<<s<<"; s_p: "<<s_p<<"; s_clean: "<<s_clean<<endl;
    if(s_clean == s_p)
        cout<<s;
    else
        cout<<":(";
    cout<<endl;
    return 0;
}

