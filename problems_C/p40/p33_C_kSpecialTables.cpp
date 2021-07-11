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

void pA(int ** p, int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void solve(){
    int n, k;
    bool debug = false;
    cin>>n>>k;
    int **p = new int*[n];
    for(int i=0;i<n;i++){
        p[i] = new int[n];
    }
    int l = 1;
    int res = 0;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            //if(debug) cout<<"l: "<<l<<"; j: "<<j<<"; k: "<<k<<endl;
            if(j+1 == k) 
                res+=l;
            p[i][j] = l;
            l++;
        }
    }
    //if(k == 1||k == n){
    //    cout<<res<<endl;
    //    pA(p, n);
    //}else{
        res = 0;
        vector<int> a(n*n);
        for(int i=0;i<n*n;i++)
            a[i] = i+1;
    
        int i = (n*n)-1;
        l = n;
        int times = n, newTimes = n;
        while(i >= 0){
            if(debug) cout<<"l: "<<l<<"; i: "<<i<<"; k: "<<k<<"; a[i] : "<<a[i]<<endl;
            if(times>0 && l>=k){
                if(l == k) res+=a[i];
                p[times-1][l-1] = a[i];
                l--;
                if(debug) cout<<"res: "<<res<<"; a[i]: "<<a[i]<<"; new l: "<<l<<endl;
            }else if(times>0 && l == k-1){
                l = n;
                times--;
                if(times > 0){
                    if(l == k) res+=a[i];
                    p[times-1][l-1] = a[i];
                    l--;
                }else{
                    times = -1;
                    i++;
                    l = k-1;
                }
                if(debug) cout<<"reboot l: "<<l<<"; times: "<<times<<endl;
            }else{
                if(debug) cout<<"finish, new l: "<<l<<"; newTimes: "<<newTimes<<endl;
               if(newTimes>0 && l > 0){
                    p[newTimes-1][l-1] = a[i];
                    if(debug) cout<<"p [i, j] : ("<<newTimes-1<<", "<<l-1<<") = a[i]: "<<a[i]<<endl;
                    l--;
                    if(debug) cout<<"newTimes -> l: "<<l<<"; newTimes -> a[i]: "<<a[i]<<"; newTimes: "<<newTimes<<endl;
               }else if(newTimes>0 && l == 0){
                    newTimes--;
                    l = k-1;
                    if(newTimes > 0){
                        p[newTimes-1][l-1] = a[i];
                        l--;
                    }
                    if(debug) cout<<"reboot l (newTimes): "<<l<<"; reboot newTimes: "<<newTimes<<endl;
               }
            }
            i--;
        }
        cout<<res<<endl;
        pA(p, n);
    //}
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

