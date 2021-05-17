#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    int A[4]={a1, a2, a3, a4};
    cin.ignore();
    string str1;
    getline(cin, str1);
    int n=str1.size();
    int x;
    int res=0;
    for(int i=0;i<n;i++){
        x = str1[i];
        x -= '0';
        res+=A[x-1];
    }
    cout<<res<<endl;
    return 0;
}
