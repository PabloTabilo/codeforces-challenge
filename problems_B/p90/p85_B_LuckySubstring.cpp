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

int main(){
    string s, lsb = "", lsbt = "";
    getline(cin, s);
    int n = s.size();
    char l;
    int notL=0;
    bool notLu = true;
    for(int i = 0; i<n;i++){
        l = s[i];
        if(l != '4' && l != '7'){
            notL++;
            notLu = false;
        }else{
            lsbt+=l;
            notLu = true;
        }
        if(lsbt.size()>0 && lsb.size() <= lsbt.size() && (!notLu || i == n-1)){
            cout<<lsbt<<endl;
            lsb = lsbt;
            lsbt = "";
        }
    }
    if(notL == n){
        cout<<-1;
    }else{
        cout<<lsb[0];
    }
    cout<<endl;
    return 0;
}

