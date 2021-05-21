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
    int n;
    cin>>n;
    cin.ignore();
    string s1;
    getline(cin, s1);
    char le;
    int res;
    int l=0, r=0, u=0, d=0;
    for(int i=0;i<n;i++){
        le = s1[i];
        if(le=='L')
            l++;
        else if(le=='R')
            r++;
        else if(le=='U')
            u++;
        else
            d++;
    }
    res=min(u,d)*2 + min(l,r)*2;
    cout<<res<<endl;
    return 0;
}

