#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n = s1.size();
    int res=0;
    for(int i=0;i<n;i++){
        if(s1[i] < s2[i]){
            res=-1;
            break;
        }
        if(s1[i] > s2[i]){
            res=1;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}
