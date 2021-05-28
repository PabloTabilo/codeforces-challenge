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

void pAr(bool A[], int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

//int A[100001] = {0};
//bool Ab[100001] = {false};

int main(){
    ll n, m, a, t;
    cin>>n>>m;
    //int up = 0;
    queue <ll> q;
    for(int i = 2; i<m+2; i++){
        cin>>a;
        //A[i] = a;
        //Ab[i] = true;
        //up += a;
        if(q.empty()){
            q.push(a);
        }else{
            t = q.back();
            if (t != a)
                q.push(a);
        }
    }
    ll res = 0, dif, lt = 0;
    while(!q.empty()){
        t = q.front();
        if(lt != 0){
            dif = t - lt;
            if(dif > 0){
                res+=dif;
            }else{
                res += (n + dif);
            }
        }
        else
            res += (t - 1);
        q.pop();
        lt = t;
    }
    //int i = 1;
    //cout<<"llego"<<endl;
    //while(up>0){
    //    up -= (i - 1);
    //    if(i == n){
    //        i = 1;
    //    }
    //    cout<<"i: "<<i<<endl;
    //    res++;
    //    i++;
    //}
    //cout<<"final"<<endl;
    //pAr(A, n+1);
    //pAr(Ab, n+1);
    cout<<res<<endl;
    return 0;
}

