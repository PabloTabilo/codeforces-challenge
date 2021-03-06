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
    string s;
    getline(cin, s);
    int n = s.size();
    char l;
    int n4 = 0, n7 = 0;
    for(int i = 0; i<n;i++){
        l = s[i];
        if(l == '4')
            n4++;
        else if(l == '7')
            n7++;
    }
    if(n4 + n7 == 0)
        cout<<-1;
    else if(n4 == n7)
        cout<<4;
    else if(n7 > n4)
        cout<<7;
    else
        cout<<4;
    cout<<endl;
    return 0;
}

