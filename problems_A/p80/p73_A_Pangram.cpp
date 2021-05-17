#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string str1;
    int A[26]={0};
    getline(cin, str1);
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    int ascii_code;
    int idx;
    int res=0;
    for(int i=0;i<n;i++){
        ascii_code = str1[i];
        idx = ascii_code-97;
        if(A[idx]==0){
            A[idx]=1;
            res++;
        }
    }
    if(res==26)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
