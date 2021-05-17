#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    int n = s1.size();
    string res ="";
    string temp;
    stack<char> stk1;
    for(int i=0;i<n;i++){
        if(stk1.empty()){
            if(s1[i]=='.')
                res+="0";
            else
                stk1.push(s1[i]);
        }else{
            if(s1[i] == '.')
                res+="1";
            else
                res+="2";
            stk1.pop();
        }
    }
    cout<<res<<endl;
    return 0;
}
