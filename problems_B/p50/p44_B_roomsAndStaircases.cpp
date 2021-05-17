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
    int t, n;
    string s1;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        getline(cin, s1);
        int f1=0;
        int l1=0;
        bool ef1=false;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                f1=i;
                ef1=true;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s1[i]=='1'){
                l1=i;
                ef1=true;
                break;
            }
        }
        if(ef1){
            f1+=1;
            l1+=1;
            //cout<<"f1: "<<f1<<endl;
            //cout<<"l1: "<<l1<<endl;
            cout<<max(n+1-f1,l1)*2;
        }else
            cout<<n;
        cout<<endl;
    }
    return 0;
}

