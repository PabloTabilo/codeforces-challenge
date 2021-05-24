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

void prV(vector<int> A, int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int totalMin=99999;
vector<int> vres;
int solve(vector<int> A, int l, int k, int n, int totMin){
    if(l<n){
        int res = A[l] + A[l+1];
        int posPairs = (k - res>0?k-res:0);
        int i=0;
        int j=posPairs;
        totMin+=posPairs;
        cout<<"l: "<<l<<endl;
        cout<<"totMin: "<<totMin<<endl;
        while(i <= posPairs){
            A[l]+=i;
            A[l+1]+=j;
            i++;
            j--;
            prV(A, n);
            int newTot = solve(A,l+1, k, n, totMin);
            if(totalMin > newTot){
                totalMin = newTot;
                vres = A;
            }
        }
    }
    return totMin;
}

int main(){
    int n, k;
    cin>>n>>k;
    cin.ignore();
    int a, va;
    vector <int> A;
    for(int i=0;i<n;i++){
        cin>>a;
        A.push_back(a);
    }
    if (n>1){
        //solve(A, 0, k, n, 0);
        //cout<<totalMin<<endl;
        //prV(vres, n);
        int ac=0;
        for(int i=1;i<n;i++){
            va = max(0, k - A[i] - A[i-1]);
            ac += va;
            A[i] += va;
        }
        cout<<ac<<endl;
    }else{
        //va = max(0, k - A[0]);
        //cout<<va<<endl;
        //A[0] += va;
        cout<<0<<endl;
    }
    prV(A,n);
    return 0;
}

