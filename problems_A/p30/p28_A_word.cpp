#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    int n = s1.size();
    int cLower = 0;
    int cUpper = 0;
    int ascii_code;
    for(int i=0;i<n;i++){
        ascii_code=s1[i];
        if(ascii_code>96)
            cLower++;
        else
            cUpper++;
    }
    if(cLower >= cUpper){
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    }else{
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    }
    cout<<s1<<endl;
    return 0;
}
