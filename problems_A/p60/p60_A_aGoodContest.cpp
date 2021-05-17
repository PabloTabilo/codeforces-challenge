#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    bool anton=false;
    cin>>n;
    cin.ignore();
    while(n--){
        string s1;
        getline(cin, s1, ' ');
        int before, after;
        cin>>before>>after;
        cin.ignore();
        if(before>=2400 && after-before>0){
            anton=true;
        }
    }
    if(anton)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
