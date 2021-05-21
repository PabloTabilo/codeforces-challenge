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

int main(){
    int n, w, h;
    int ot, c;
    bool pos=true;
    cin>>n;
    c=0;
    while(n--){
        cin>>w>>h;
        if(c==0){
            ot=max(w,h);
        }else{
            if(ot<w && ot<h){
                pos=false;
                break;
            }
            if(ot>=w && ot>=h)
                ot=max(w,h);
            else
                ot=min(w,h);
        }
        c++;
    }
    if(pos)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}

