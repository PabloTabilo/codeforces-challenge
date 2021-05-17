#include<iostream>
#include<string>
#include<queue>

using namespace std;

bool isPalindrome(string s1, int n){
    string s1_rev="";
    for(int i=n-1;i>=0;i--)
        s1_rev+=s1[i];
    return s1 == s1_rev;
}

void switchChar(string &s1, int i, int j){
    string temp_i = "";
    temp_i+=s1[i];  
    string temp_j = "";
    temp_j+=s1[j];  
    s1.replace(i,1,temp_j);
    s1.replace(j,1,temp_i);
}

int main(){
    int t;
    string s1;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin, s1);
        int n=s1.size();
        priority_queue<char> q1;
        for(int i=0;i<n;i++){
            q1.push(s1[i]);
        }
        string reord="";
        while(!q1.empty()){
            reord+=q1.top();
            q1.pop();
        }
        if(isPalindrome(s1,n)){
            if(isPalindrome(reord,n))
                cout<<-1;
            else
                cout<<reord;
        }else{
            cout<<s1;
        }
        cout<<endl;
    }
    return 0;
}
