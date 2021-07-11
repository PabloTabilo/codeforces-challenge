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
#include<tuple>
#include<chrono>
#include<utility>

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

void solve(){
   int n, sx, sy;
   bool debug = false;
   cin>>n>>sx>>sy;
   int px, py;
   vector<tuple<int, int, int>> shaw(4);
    shaw[0] = make_tuple(0,sx+1, sy);
    shaw[1] = make_tuple(0,sx-1, sy);
    shaw[2] = make_tuple(0,sx, sy+1);
    shaw[3] = make_tuple(0,sx, sy-1);

   for(int i = 0; i<n;i++){
        cin>>px>>py;
        if(debug) cout<<"px: "<<px<<"; py: "<<py<<endl;
        if(get<1>(shaw[0]) <= px){
            get<0>(shaw[0])++;
            if(debug) cout<<"get<1>(shaw[0]): "<<get<1>(shaw[0])<<"; get<2>(shaw[0]): "<<get<2>(shaw[0])<<"; get<0>(shaw[0]): "<<get<0>(shaw[0])<<endl;
        }
        if(get<1>(shaw[1]) >= px){
            get<0>(shaw[1])++;
            if(debug) cout<<"get<1>(shaw[1]): "<<get<1>(shaw[1])<<"; get<2>(shaw[0]): "<<get<2>(shaw[1])<<"; get<0>(shaw[1]): "<<get<0>(shaw[1])<<endl;
        }
        if(get<2>(shaw[2]) <= py){
            get<0>(shaw[2])++;
            if(debug) cout<<"get<1>(shaw[2]): "<<get<1>(shaw[2])<<"; get<2>(shaw[0]): "<<get<2>(shaw[2])<<"; get<0>(shaw[2]): "<<get<0>(shaw[2])<<endl;
        }
        if(get<2>(shaw[3]) >= py){
            get<0>(shaw[3])++;
            if(debug) cout<<"get<1>(shaw[3]): "<<get<1>(shaw[3])<<"; get<2>(shaw[0]): "<<get<2>(shaw[3])<<"; get<0>(shaw[3]): "<<get<0>(shaw[3])<<endl;
        }
   }
    int res = max(get<0>(shaw[0]), max(get<0>(shaw[1]), max(get<0>(shaw[2]), get<0>(shaw[3]))));
    for(int i = 0; i<4;i++){
        if(get<0>(shaw[i]) == res){
            cout<<res<<endl;
            cout<<get<1>(shaw[i])<<" "<<get<2>(shaw[i])<<endl;
            break;
        }
    }
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

