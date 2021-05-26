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

int A[1000001] = {0};

int main(){
    A[0] = 6;
    A[1] = 2;
    A[2] = 5;
    A[3] = 5;
    A[4] = 4;
    A[5] = 5;
    A[6] = 6;
    A[7] = 3;
    A[8] = 7;
    A[9] = 6;
    for(int i = 10; i < 1000001; i++){
        A[i] = A[i/10] + A[i%10];
    }
    int a, b;
    //unordered_map<char, int>um;
    //um['0'] = 6;
    //um['1'] = 2;
    //um['2'] = 5;
    //um['3'] = 5;
    //um['4'] = 4;
    //um['5'] = 5;
    //um['6'] = 6;
    //um['7'] = 3;
    //um['8'] = 7;
    //um['9'] = 6;
    cin>>a>>b;
    int res = 0;
    //int n = 1;
    //string s;
    while(a <= b){
        //s = to_string(a);
        //n = s.size();
        //for(int i=0;i<n;i++)
        //    res+=um[s[i]];
        res += A[a];
        a++;
    }
    cout<<res<<endl;

    return 0;
}

