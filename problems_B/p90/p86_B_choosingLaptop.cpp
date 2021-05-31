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
    int n;
    int s, r, h, c;
    cin>>n;
    bool *Ab = new bool[n];
    int **A = new int*[n];
    int *Ac = new int[n];
    for(int i = 0;i<n;i++){
        A[i] = new int [3];
    }
    for(int i = 0; i<n; i++){
        cin>>s>>r>>h>>c;
        A[i][0] = s;
        A[i][1] = r;
        A[i][2] = h;
        Ac[i] = c;
        Ab[i] = false;
    }
    int i = 0;
    int st, rt, ht;
    while(i < n){
        s = A[i][0];
        r = A[i][1];
        h = A[i][2];
        for(int j = i+1;j<n;j++){
            st = A[j][0];
            rt = A[j][1];
            ht = A[j][2];
            if(s < st && r < rt && h < ht){
                Ab[i] = true;
            }else if(st < s && rt < r && ht < h){
                Ab[j] = true;
            }
        }
        i++;
    }
    int res = 9999999, k = 0;
    for(int i=0;i<n;i++){
        if(!Ab[i]){
            c = Ac[i];
            if(c < res){
                res = c;
                k = i;
            }
        }
    }
    cout<<k+1<<endl;
    return 0;
}

