#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1="";
    for(int i=1;i<499;i++){
        s1+=to_string(i);
    }
    int n;
    cin>>n;
    cout<<s1[n-1]<<endl;
    return 0;
}
