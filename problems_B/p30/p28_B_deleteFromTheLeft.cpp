#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int i = s1.size()-1;
    int j = s2.size()-1;
    int same=0;
    while(s1[i] == s2[j]&&i>=0&&j>=0){
        same++;
        i--;
        j--;
    }
    cout<<s1.size() + s2.size() - 2*same<<endl;
    return 0;
}
