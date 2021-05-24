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
    string s1;
    cin>>n;
    cin.ignore();
    int A[26]={0};
    getline(cin, s1);
    int idx;
    int res=0;
    if (n <= 26){
        for(int i=0;i<n;i++){
            idx = s1[i]-'a';
            //cout<<idx<<endl;
            //cout<<A[idx]<<endl;
            if(A[idx]>0)
                res++;
            A[idx]++;
        }
        if(res<26)
            cout<<res;
        else
            cout<<-1;
    }else
        cout<<-1;
    cout<<endl;
    return 0;
}

