#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s3;
    cin>>s1>>s3;
    int n = s1.size();
    int i=0;
    string res="";
    int canDo=0;
    while(i<n){
        if(s1[i]<s3[i]){
            res="-1";
            break;
        }

        if(s1[i] == s3[i])
            res+='z';
        else
            res+=s3[i];
        i++;
    }
    cout<<res<<endl;
    return 0;
}
