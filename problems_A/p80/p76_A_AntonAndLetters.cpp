#include<iostream>
#include<string>

using namespace std;

int main(){
    char x;
    int A[26]={0};
    int ascii_code, idx;
    int res=0;
    while(cin>>x){
        if(x == '}')
            break;
        ascii_code = x;
        idx = ascii_code-97;
        if(A[idx]==0 && idx >= 0 && idx < 26){
            A[idx]=1;
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}
