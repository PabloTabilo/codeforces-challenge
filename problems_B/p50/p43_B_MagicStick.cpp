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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;

using namespace std;

int main(){
    int t;
    int x, y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        bool imposs=false;
        int lastX;
        while(x!=y && !imposs && x > 0){
            if(x<y && x%2==0){
                lastX=3*x/2;
                if(x == 2 && lastX==3 && lastX!=y){
                    x=0;
                    imposs=true;
                }else{
                    x=lastX;
                }
            }else if(x > 1){
                if(x > y)
                    x=y;
                else
                    x-=1;
            }else{
                imposs=true;
            }
            //cout<<x<<endl;
        }
        if(imposs)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
    return 0;
}

