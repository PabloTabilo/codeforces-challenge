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
#include<chrono>

using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define _USE_MATH_DEFINES
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second

typedef long int int32;
typedef unsigned long int uint32;
typedef long long ll;
typedef unsigned long long int ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

void pV(vector<int> v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void loopMe(char ** a, vector<int> &v, int n, int m, int k, bool trs){
    int t = 0;
    char w;
    for(int i=0;i<n;i++){
        t = 0;
        for(int j=0;j<m;j++){
            if(trs)
                w = a[j][i];
            else
                w = a[i][j];
            if(w == '.'){
                t++;
            }else{
                if(t >= k) v.push_back(t);
                t = 0;
            }
        }
        if(t>=k) v.push_back(t);
    }
}

void solve(){
    int n, m, k;
    bool debug = false;
    cin>>n>>m>>k;
    char ** a = new char*[n];
    // consecutives possibles
    vector<int> pc;
    for(int i=0;i<n;i++){
        a[i] = new char[m];
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    if(n>1 && m>1){
        loopMe(a, pc, n, m, k, false); 
        loopMe(a, pc, m, n, k, true); 
    }
    else if(n == 1 && m>1){
        loopMe(a, pc, n, m, k, false); 
    }
    else if(m == 1 && n > 1){
        loopMe(a, pc, m, n, k, true); 
    }else{
        loopMe(a, pc, n, m, k, false);
    }
    if (debug) pV(pc);
    int res = 0;
    int v;
    for(int i = 0; i<pc.size();i++)
        res += pc[i]-k+1;
    if(n > 1 && m > 1 && k == 1)
        res/=2;
    cout<<res<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    // read & write file
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    //cin>>t;
    t = 1;
    while(t--){
        solve();
    }
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
    return 0;
}

