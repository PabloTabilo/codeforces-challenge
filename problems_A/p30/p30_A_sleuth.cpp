#include<iostream>
#include<string>
#include<algorithm>
#include<regex>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    regex regexp1(" ");
    s1 = regex_replace(s1, regexp1, "");
    regex regexp("[a-z]+");
    smatch m;
    regex_search(s1, m, regexp);
    string res="";
    for(auto x : m){
        res+=x;
    }
    bool isVocal=false;
    int n_r = res.size();
    string vocals = "aeiouy";
    for(int i =0;i<6;i++){
        if(res[n_r-1] == vocals[i]){
            isVocal=true;
            break;
        }
    }
    if(isVocal)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
