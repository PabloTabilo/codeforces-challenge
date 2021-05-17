#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    string s1;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin, s1);
        int n=s1.size();
        
        bool isAlice=true;
        int resA=0;
        int resB=0;
        
        int i=0;
        bool same=false;
        int mount1s=0;
        int mount0s=0;
        while(n>=2){
                //cout<<"s1[i]: "<<s1[i]<<endl;
                //cout<<"s1[i+1]: "<<s1[i+1]<<endl;
            if(s1[i+1] != s1[i] && i+1<n){
                //cout<<"s1: "<<s1<<endl;
                s1.erase(i,2);
                n-=2;
                //cout<<"s1: "<<s1<<endl;
                if(isAlice){
                    resA++;
                    isAlice=false;
                }else{
                    resB++;
                    isAlice=true;
                }
                n=s1.size();
                //cout<<"n: "<<n<<endl;
                for(int j=0;j<n;j++){
                    mount1s+=(s1[j]=='1'?1:0);
                    mount0s+=(s1[j]=='0'?1:0);
                }
                //cout<<"mount1s: "<<mount1s<<endl;
                //cout<<"mount0s: "<<mount0s<<endl;
                if(n == mount1s || n == mount0s || n<2){
                    break;
                }
                i=-1;
                mount1s=0;
                mount0s=0;
            }
            i++;
            if(i>=n){
                break;
            }
        }
        if(resA>resB)
            cout<<"DA";
        else
            cout<<"NET";
        cout<<endl;
    }
    return 0;
}
