#include<iostream>

using namespace std;

int main(){
    int n;
    string s1;
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin, s1);
        int size_s1 = s1.size();
        if(size_s1 > 10){
            cout<<s1[0]<<size_s1-2<<s1[size_s1-1];
        }else
            cout<<s1;
        cout<<endl;
    }
    return 0;
}
