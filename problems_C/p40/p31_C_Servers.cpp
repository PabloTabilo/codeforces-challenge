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
typedef pair<vector<int>, int> myPair;

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

class MyLess{
    public: 
        bool operator() (const myPair &t1, const myPair &t2){
            if(t1.second > t2.second) return true;
            else return false;
        }
};

bool debug = false;

ll sumSerie(ll n, ll a, ll b){
    return (n*(a+b))/2;
}

void addMe(ll ki, ll s_ti_di, priority_queue<myPair, vector<myPair>, MyLess > &pq, priority_queue<int, vector<int>, greater<int> > &pn){
    vector<int> v;
    int i = 1;
    int s = 0;
    if(pn.size()<ki)
        cout<<-1<<endl;
    else{
        while(i <= ki){
            s+=pn.top();
            v.push_back(pn.top());
            if(debug)cout<<"ki: "<<ki<<"; s : "<<s<<"; pn.top(): "<<pn.top()<<endl;
            pn.pop();
            i++;
        }
        pq.push({v, s_ti_di});
        cout<<s<<endl;
    }
}


void recuperate(vector<int> &v, priority_queue<int, vector<int>, greater<int> > &pn){
    int n = v.size();
    int i = 0;
    while(i < n){
        if(debug)cout<<"v[i]: "<<v[i]<<endl;
        pn.push(v[i]);
        i++;
    }
}

void solve(){
    int n, q;
    cin>>n>>q;
    ll notOcc = n;
    ll s1, s2;
    myPair last;
    priority_queue <myPair, vector<myPair>, MyLess> pq;
    priority_queue <int, vector<int>, greater<int> > pn;
    for(int i = 1; i<=n;i++)
        pn.push(i);
    while(q--){
        ll ti, ki, di;
        cin>>ti>>ki>>di;
        // Todo liberado, solo agregar
        if(pq.empty()){
            addMe(ki, ti+di, pq, pn);
        }else{
            last = pq.top();
            if(debug) cout<<"last: "<<last.second<<"; ti: "<<ti<<endl;
            // No es posible liberar recursos, pero se tienen disponible
            // para agregar nuevos
            if(last.second > ti && pn.size()>=ki){
                addMe(ki, ti+di, pq, pn);
            }
            // Se liberaron recursos y se agregaron nuevos
            else if(last.second <= ti){
                pq.pop();
                if(debug) cout<<"last: "<<last.second<<"; ti: "<<ti<<endl;
                recuperate(last.first, pn);
                if (!pq.empty())
                    last = pq.top();
                while(!pq.empty() && last.second<=ti){
                    if(debug) cout<<"last: "<<last.second<<"; ti: "<<ti<<endl;
                    recuperate(last.first, pn);
                    pq.pop();
                    last = pq.top();
                }
                addMe(ki, ti+di, pq, pn);
            } else cout<<-1<<endl;
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

