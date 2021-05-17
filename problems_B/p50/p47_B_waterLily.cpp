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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef double d64;
typedef long double ld80;

using namespace std;

int main(){
    double H,L,x;
    cin>>H>>L;
    x = ((L/(2.*H))*L - H/2.);
    cout<<fixed<<setprecision(13)<<x<<endl;
    return 0;
}

