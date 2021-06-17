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

unordered_map<ll, vector<ll> >um;
unordered_map<ll, ll> sm;

void solve(){
    um[0] = {0};
    um[1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    um[2] = {2, 4, 6, 8, 0};
    um[3] = {3, 6, 9, 2, 5, 8, 1, 4, 7, 0};
    um[4] = {4, 8, 2, 6, 0};
    um[5] = {5, 0};
    um[6] = {6, 2, 8, 4, 0};
    um[7] = {7, 4, 1, 8, 5, 2, 9, 6, 3, 0};
    um[8] = {8, 6, 4, 2, 0};
    um[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    
    sm[0] = 0;
    sm[1] = 45;
    sm[2] = 20;
    sm[3] = 45;
    sm[4] = 20;
    sm[5] = 5;
    sm[6] = 20;
    sm[7] = 45;
    sm[8] = 20;
    sm[9] = 45;

    ll n;
    string a;
    cin>>n>>a;
    int m = a[a.size()-1]-'0';
    ll times = 0, tot = 0, reach = 0;
    if(m == 5){
        times = n/m;
        tot = times*sm[m];
        if
    }else{ 
    ll v = 10;
    if(m%2!=0)
        times = n/(m*v);
    else{
        v = 5;
        times = n/(m*v);
    }
    tot = times*sm[m];
    reach = times*m*v;
    if(n%(m*v)!=0){
        int i = 0;
        while(reach+um[m][i]<n){
            tot+=um[m][i];
            reach+=um[m][i];
            i++;
        }
    }
    cout<<tot<<endl;
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
    cin>>t;
    //t = 1;
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

