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

int main(){
    int n, m;
    string s, t;
    cin>>n>>m;
    cin.ignore();
    getline(cin, s);
    getline(cin, t);
    string resA=t.substr(m-n,n);
    string rest;
    int minC=9999;
    int mint;
    vector<int> vf;
    int firstTime=0;
    for(int i=m-n;i>=0;i--){
        mint=0;
        vector<int> vt;
        rest="";
        if (firstTime>0)
            rest+=t[i];
        rest+=resA;
        for(int j=0;j<n;j++){
            if(s[j]!=rest[j]){
                mint++;
                vt.push_back(j+1);
            }
        }
        //cout<<"rest: "<<rest<<endl;
        //cout<<"mint: "<<mint<<endl;
        firstTime++;
        resA=rest;
        if(minC>=mint){
            minC=mint;
            vf = vt;
        }
    }
    cout<<minC<<endl;
    for(int i=0;i<vf.size();i++){
        cout<<vf[i]<<" ";
    }
    cout<<endl;
    return 0;
}

