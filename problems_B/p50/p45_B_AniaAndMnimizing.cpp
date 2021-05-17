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
    int n,k;
    string s1;
    cin>>n>>k;
    cin.ignore();
    getline(cin,s1);
    int i=0;
    string res="";
    if(n != 1){
        while(i<n){
            if(s1[i]!='1' && i==0 && k>0){
                res+="1";
                k--;
            }
            else if(s1[i]!='0' && k>0 && i>0){
                res+="0";
                k--;
            }else{
                res+=s1[i];
            }
            i++;
        }
    }else{
        if(k>0)
            res="0";
        else
            res=s1;
    }
    cout<<res<<endl;
    return 0;
}

