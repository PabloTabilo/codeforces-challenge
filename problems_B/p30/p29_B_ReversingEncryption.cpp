#include<iostream>

using namespace std;

string myReverse(string s1, int i){
    string res="";
    int n = s1.size();
    for(int k=i-1;k>=0;k--)
        res+=s1[k];
    for(int k=i;k<n;k++)
        res+=s1[k];
    return res;
}

int main(){
    int n;
    string s1;
    cin>>n>>s1;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            s1=myReverse(s1, i);
        }
    }
    cout<<s1<<endl;
    return 0;
}
