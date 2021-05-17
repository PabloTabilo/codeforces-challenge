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

int main(){
    int n;
    ll k,x,res,i;
    cin>>n;
    while(n--){
        cin>>k>>x;
        i=1;
        res=x;
        while(i<k){
            res+=9;
            i++;
        }
        cout<<res<<endl;
    }
    return 0;
}

