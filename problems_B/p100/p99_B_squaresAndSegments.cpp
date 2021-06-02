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
    int n;
    cin>>n;
    if(n == 1)
        cout<<2;
    else if(n == 2)
        cout<<3;
    else if(n == 3)
        cout<<4;
    else{
        int cont = 2;
        int i = 4;
        while(i < n){
            cont++;
            i = cont * cont;
        }
        //cout<<"i: "<<i<<"; cont: "<<cont<<"; i - cont: "<<i-cont<<endl;
        if(i == n){
            cout<<2*cont;
        }else{
            if(i-cont >= n)
                cout<<2*cont-1;
            else
                cout<<2*cont;
        }
    }
    cout<<endl;
    return 0;
}

