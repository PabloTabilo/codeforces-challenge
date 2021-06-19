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

bool eqS(string &s1, string &s2){
    int n = s1.size();
    int n2 = s2.size();
    if(n != n2)
        return false;
    for(int i=0;i<n;i++){
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

void solve(){
    string s;
    string aux = "";
    int k;
    bool debug = false;
    getline(cin, s);
    cin>>k;
    int n = s.size();
    int nc = 0;
    bool rep = false;
    bool interr = false;
    int pos_rep = 0;
    int inter=0, cop=0;
    for(int i = 0; i<n; i++){
        if(s[i] == '*' && !rep){
            rep = true;
            pos_rep = i;
        }
        if(s[i] == '?'){
            interr = true;
            inter++;
        }
        if(s[i] == '*'){
            cop++;
        }
        if(s[i] == '?' || s[i] == '*'){
            continue;
        }
        if(i<n-1 && s[i+1]!='?' && s[i+1]!='*'){
            nc++;
            aux+=s[i];
        }
        if(i == n-1){
            nc++;
            aux+=s[i];
        }
    }
    if(debug) cout<<"n: "<<n<<"; cop: "<<cop<<"; inter: "<<inter<<"; k: "<<k<<"; nc: "<<nc<<endl;
    int kp = k-nc;
    int c = inter + cop;
    if(!rep && !interr){
        if(n == k)
            cout<<s;
        else
            cout<<"Impossible";
    }else if(nc > k){
        cout<<"Impossible";
    }else if(nc == k){
        cout<<aux;
    }else if (kp > c && !rep){
        cout<<"Impossible";
    }else{
        if(rep){
            bool frep = false;
            // can eliminate all, except for first *
            int i = 0;
            while(i<n){
                if(i < n-1){
                    if(s[i+1]=='?')
                        i+=2;
                    else if(s[i+1]=='*' && !frep){
                        // rep kp times
                        for(int l=1;l<=kp;l++)
                            cout<<s[i];
                        i+=2;
                        frep = true;
                    }
                    else if(s[i+1]=='*' && rep)
                        i+=2;
                    else{
                        cout<<s[i];
                        i++;
                    }
                }else{
                    cout<<s[i];
                    i++;
                }
            }
        }else{
            // binary combination
            int i = 0;
            while(i < n){
                if(i<n-1){
                    if(s[i+1]=='?' && kp>0){
                        cout<<s[i];
                        kp--;
                        i++;
                    }else if(s[i+1]=='?')
                        i++;
                    else{
                        cout<<s[i];
                    }
                }else{
                    cout<<s[i];
                }
                i++;
            }
        }
    }
    cout<<endl;
    string sn1 = "gfkespjenrnriymcvtswlzermumzrqaqbbdujqwdwezqrshqxpxsrcqgzxlchgtoyevlrojxovstvbw";
    string sn2 = "gfkespjenrnriymcvtswlzermumzrqaqbbdujqwdwezqrshqxpxsrcqgzxlchgtoyevlrojxovstvbw";
    if(debug) cout<<eqS(sn1, sn2)<<endl;
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

