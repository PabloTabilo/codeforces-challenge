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
    int q;
    string s, t;
    cin>>q;
    cin.ignore();
    while(q--){
        getline(cin, s);
        getline(cin, t);
        int n=s.size();
        bool A[26];
        bool pos=false;
        for(int i=0;i<26;i++)
            A[i]=false;
        for(int i=0;i<n;i++)
            A[s[i]-'a']=true;
        int i=0;
        while(i<n && !pos){
            if(A[t[i]-'a']){
                pos=true;
            }
            i++;
        }
        if(pos)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}

