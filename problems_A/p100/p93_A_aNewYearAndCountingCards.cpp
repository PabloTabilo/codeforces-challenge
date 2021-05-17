#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    char V[5]={'a','e','i','o','u'};
    
    getline(cin, s1);
    int n = s1.size();
    int res=0;
    int ascii_code=0;
    for(int i=0;i<n;i++){
        ascii_code=s1[i];
        if(ascii_code<=57){
            ascii_code-=48;
            res+=(ascii_code%2==0?0:1);
        }else{
            for(int j=0;j<5;j++){
                if(s1[i] == V[j]){
                    res+=1;
                    break;
                }
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
