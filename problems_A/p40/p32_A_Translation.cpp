#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s1, scheck;
    getline(cin, s1);
    getline(cin, scheck);
    stack<char> stk1;
    int n = s1.size();
    for(int i=0;i<n;i++)
        stk1.push(s1[i]);
    string rev = "";
    while(!stk1.empty()){
        rev += stk1.top();
        stk1.pop();
    }
    if(rev != scheck)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;
    return 0;
}
