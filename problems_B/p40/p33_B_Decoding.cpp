#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, i;
    string s1;
    cin>>n;
    cin>>s1;
    if(s1.size()<=2){
        cout<<s1;
    }else{
        string res="";
        i=n-2;
        if(n%2!=0){
            while(i>=1){
                res+=s1[i];
                i-=2;
            }
            i=0;
            while(i<n){
                res+=s1[i];
                i+=2;
            }
        }else{
            while(i>=0){
                res+=s1[i];
                i-=2;
            }
            i=1;
            while(i<n){
                res+=s1[i];
                i+=2;
            }
        }
        cout<<res;
    }
    cout<<endl;
    return 0;
}
