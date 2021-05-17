#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    int n, a, b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        string dif="";
        for(int i=0;i<b;i++)
            dif+=i+97;
        string max_l="";
        for(int i=0;i<a;i++)
            max_l+=(i<b?dif[i]:dif[b-1]);
        string res="";
        int j=0;
        for(int i=0;i<n;i++){
            if(j>=a)
                j=0;
            res += max_l[j++];
            }
        cout<<res<<endl;
        }
    return 0;
}
