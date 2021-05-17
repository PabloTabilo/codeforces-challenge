#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t, res;
    string s1;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin, s1);
        vector <int> v1;
        int n=s1.size();
        res=0;
        for(int i=0;i<n;i++){
            if(s1[i]!='0'){
                res++;
            }else{
                if(res>0){
                    v1.push_back(res);
                }
                res=0;
            }
        }
        if(res>0){
            v1.push_back(res);
            res=0;
        }
        sort(v1.begin(), v1.end(), greater<int>());
        int a=0;
        int n_v1=v1.size();
        for(int i=0;i<n_v1;i+=2){
            a+=v1[i];
        }
        cout<<a<<endl;
    }
    return 0;
}
