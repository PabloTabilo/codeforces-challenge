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
    int res=1;
    int cont=1;
    while(n>res){
        cont++;
        res=cont*cont;
    }
    //cout<<"cont: "<<cont<<endl;
    //cout<<"res post while: "<<res<<endl;
    if(n==2)
        cout<<6;
    else if(n==3)
        cout<<8;
    else if(n%res==0)
        cout<<cont*4;
    else{
        res = (cont-1)*(cont-1); 
        res = (cont-1)*4 + ((n-res)/(cont-1))*2 + ((n-res)>(cont-1)?2:0);
        //cout<<"res mod: "<<res<<endl;
        cout<<res;
    }
    cout<<endl;
    return 0;
}

