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

int main(){
    int n, a;
    cin>>n;
    vector <int> A(n);
    for(int i = 0;i<n; i++){
        cin>>a;
        A[i] = a;
    }
    sort(A.begin(), A.end());
    int i=0;
    int j=n-1;
    int mid = (n%2==0?n/2:(n/2) + 1);
    while(i<mid){
        if (i != j)
            cout<<A[i]<<" "<<A[j]<<" ";
        else
            cout<<A[i];
        i++;
        j--;
    }
    return 0;
}

