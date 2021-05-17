#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str1;
    getline(cin, str1);
    stack<char> stk1;
    int res=0;
    for(int i=0;i<n;i++){
        if(stk1.empty()){
            stk1.push(str1[i]);
        }else{
            char lastVal = stk1.top();
            if(lastVal != str1[i]){
                stk1.pop();
                stk1.push(str1[i]);
            }else{
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
