#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1;
    getline(cin, str1);
    char char0 = str1[0];
    int ascii_code = char0 - 32;
    if(ascii_code>=65){
        char char1 = ascii_code;
        str1[0] = char1;
    }
    cout<<str1<<endl;
    return 0;
}
