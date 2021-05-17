#include<iostream>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.size();
    string res = "";
    for(int i=0;i<n;i++){
        if(s1[i] != s2[i])
            res+='1';
        else
            res+='0';
    }
    cout<<res<<endl;
    return 0;
}
