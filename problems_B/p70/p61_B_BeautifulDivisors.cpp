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

int bigBit(int x, int b){
    b=b<<1;
    if(b>x)
        return b>>1;
    return bigBit(x,b);
}

int main(){
    int n;
    cin>>n;
    int res=1;
    int bb=0;
    int cont=0;
    int lastres=0;
    int gcdnum=0;
    while(n>=res){
        lastres=res;
        if(n%lastres==0){
            gcdnum=lastres;
        }
        bb = bigBit(res,1);
        res=res<<2;
        //cout<<"bb: "<<bb<<endl;
        //cout<<"res: "<<res<<endl;
        if (bb==1){
            res += bb<<1; 
        }else{
            res += bb>>cont;
            cont++;
        }
        //cout<<"res post cal: "<<res<<endl;
        //cout<<"-------------"<<endl;
    }
    cout<<gcdnum<<endl;
    return 0;
}

