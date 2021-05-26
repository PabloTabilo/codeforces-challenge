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
    int n, m;
    string s1, s2;
    string l;
    unordered_map<string, string> um;
    cin>>n>>m;
    cin.ignore();
    for(int i = 0;i < m; i++){
        cin>>s1>>s2;
        cin.ignore();
        if(s2.size()<s1.size())
            um[s1] = s2;
        else
            um[s1] = s1;
    }
    getline(cin, l);
    stringstream ss(l);
    string w;
    while(ss>>w){
        cout<<um[w]<<" ";
    }
    cout<<endl;
    return 0;
}

