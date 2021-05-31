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

string tN(int x){
    string r = "";
    int num = 0, lastN = 0;
    int i = (x!=0?log10(x) / log10(3):0);
    if(2*pow(3,i)<=x){
        num+=2*pow(3,i);
        r="2";
    }else if(pow(3,i)<=x){
        num+=pow(3,i);
        r="1";
    }
    i-=1;
    while(num != x && i >= 0){
        if(num + 2 * pow(3, i) <= x){
            num+=2*pow(3,i);
            r+="2";
        }else if(num + pow(3, i) <= x){
            num+=pow(3,i);
            r+="1";
        }else{
            r+="0";
        }
        i--;
    }
    while(i>=0){
        r+='0';
        i--;
    }
    return r;
}

int main(){
    int m0[3] = {0, 1, 2};
    int m1[3] = {2, 0, 1};
    int m2[3] = {1, 2, 0};
    int a, c;
    cin>>a>>c;
    string as = tN(a), cs = tN(c);
    while(as.size()<cs.size()){
        as.insert(0,"0");
    }
    while(as.size()>cs.size()){
        cs.insert(0,"0");
    }
    //cout<<"a: "<<a;
    //cout<<" as: "<<as<<endl;
    //cout<<"c: "<<c;
    //cout<<" cs: "<<cs<<endl;
    ll i = as.size()-1;
    ll j = 0;
    ll res = 0;
    while(i>=0){
        if(as[i]=='0'){
            res+=m0[cs[i]-'0']*pow(3,j);
        }else if(as[i]=='1'){
            res+=m1[cs[i]-'0']*pow(3,j);
        }else{
            res+=m2[cs[i]-'0']*pow(3,j);
        }
        i--;
        j++;
    }
    cout<<res<<endl;
    return 0;
}

