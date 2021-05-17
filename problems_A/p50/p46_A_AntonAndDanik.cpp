#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s1;
    cin>>n;
    cin.ignore();
    getline(cin, s1);
    int res=0;
    for(int i=0;i<n;i++)
        res += (s1[i]=='A'?1:0);
    if(n-res>res)
        cout<<"Danik";
    else if(n-res<res)
        cout<<"Anton";
    else
        cout<<"Friendship";
    cout<<endl;
    return 0;
}
