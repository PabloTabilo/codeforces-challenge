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
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    char pc, c;
    bool A[26] = {false};
    stack <int> sx, sy;
    cin>>n>>m>>pc;
    char **p = new char*[n];
    for(int i = 0;i<n;i++){
        p[i] = new char[m];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>c;
            p[i][j] = c;
            if(pc == c){
                sx.push(i);
                sy.push(j);
            }
        }
    }
    
    int x, y;
    while(!sx.empty()){
        x = sx.top();
        y = sy.top();
        if(x+1<n && p[x+1][y] != '.' && p[x+1][y] != pc){
            c = p[x+1][y];
            A[c-'A'] = true;
        }
        if(x-1>=0 && p[x-1][y] != '.' && p[x-1][y] != pc){
            c = p[x-1][y];
            A[c-'A'] = true;
        }
        if(y+1<m && p[x][y+1] != '.' && p[x][y+1] != pc){
            c = p[x][y+1];
            A[c-'A'] = true;
        }
        if(y-1>=0 && p[x][y-1] != '.' && p[x][y-1] != pc){
            c = p[x][y-1];
            A[c-'A'] = true;
        }
        sy.pop();
        sx.pop();
    }

    int res = 0;
    for(int i=0;i<26;i++)
        res += (A[i]?1:0);
    cout<<res<<endl;
    
    return 0;
}

