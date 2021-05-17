#include <iostream>
#include <string>

//https://codeforces.com/problemset/problem/202/A

using namespace std;


bool rev(string s1){
    int n = s1.size();
    string rev="";
    for(int i = n-1; i>=0; i--)
        rev+=s1[i];
    return rev == s1;
}

int main(){
    string input1;
    getline(cin, input1);
    //cout<<"rev? : " <<rev(input1)<<endl;
    int n = input1.size();
    int max_ascii_char = 0;
    int ascii_char;
    for(int i = 0; i < n; i++){
        ascii_char = input1[i];
        max_ascii_char = max(max_ascii_char, ascii_char);
    }
    string res = "";
    for(int i=0;i<n;i++){
        ascii_char = input1[i];
        if(max_ascii_char == ascii_char)
            res += input1[i];
    }
    cout<<res<<endl;
    
    return 0;
}
