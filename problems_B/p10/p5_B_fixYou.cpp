#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    int n, m;
    int res;
    string s1;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin.ignore();
        res=0;
        for(int i=0;i<n;i++){
            getline(cin, s1);
            if(i!=n-1){
                res+=(s1[m-1]=='R'?1:0);
            }else{
                for(int i=0;i<m;i++)
                    res+=(s1[i]=='D'?1:0);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
