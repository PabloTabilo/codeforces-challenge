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
    int n, a;
    int minf1 = 99999;
    int minf2 = 99999;
    bool pos = true;
    vector<int> v1;
    vector<int> v2;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin, s);
    for(int i=0;i<2*n;i++){
        a = s[i]-'0';
        if(i<n){
            v1.push_back(a);
            if(minf1 > a)
                minf1 = a;
        }else{
            v2.push_back(a);
            if(minf2 > a)
                minf2 = a;
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    //pV(v1, n);
    //pV(v2, n);
    if(minf1 < minf2){
        for(int i = 0;i<n; i++){
            if(v1[i] >= v2[i])
                pos = false;
        }
    }else if(minf1 > minf2){
        for(int i = 0;i<n; i++){
            if(v1[i] <= v2[i])
                pos = false;
        }
    }else{
        pos = false;
    }
    if(pos)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}

