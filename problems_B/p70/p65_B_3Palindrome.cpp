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
    int n;
    cin>>n;
    string res="";
    int i=0;
    bool a1=true, a2=false, b1=false;
    while(i<n){
        if(a1){
            res+="a";
            a1 = false;
            a2 = true;
        }else if(a2){
            res+="a";
            b1=true;
            a2=false;
        }else if(b1){
            res+="b";
            b1=false;
        }else{
            res+="b";
            a1=true;
        }
        i++;
    }
    cout<<res<<endl;
    return 0;
}

