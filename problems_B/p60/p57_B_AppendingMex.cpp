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
    int n, a;
    cin>>n;
    int A[n];
    int p=0;
    stack<int> stk1;
    unordered_map<int, bool> umap;
    bool pos=true;
    int lv;
    for(int i=0;i<n;i++){
        cin>>a;
        A[i]=a;
        if(stk1.empty()){
            stk1.push(a);
            umap[a]=true;
            if(a!=0){
                p=i;
                pos=false;
                break;
            }
        }else{
            lv = stk1.top();
            //cout<<"lv: "<<lv<<endl;
            //cout<<"a: "<<a<<endl;
            if(lv<a && (a-lv)==1){
                //cout<<"push a: "<<a<<endl;
                stk1.push(a);
                umap[a]=true;
            }else if(lv>a && !umap[a]){
                //cout<<"a, not in stack && top val > a: "<<a<<endl;
                p=i-1;
                pos=false;
                break;
            }else if(lv<a && (a-lv)!=1){
                //cout<<"a > lv && (a-lv)!=1: "<<a<<endl;
                p=i;
                pos=false;
                break;
            }
        }
        
    }
    if(pos)
        cout<<-1;
    else
        cout<<p+1;
    cout<<endl;
    return 0;
}

