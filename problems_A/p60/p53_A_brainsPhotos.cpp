#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    cin.ignore();
    bool color=false;
    char s1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s1;
            //cout<<"j: "<<j<<" s1: "<<s1<<endl;
            if(s1=='C'||s1=='M'||s1=='Y'){
                color=true;
            }
        }
        cin.ignore();
    }
    if(color)
        cout<<"#Color";
    else
        cout<<"#Black&White";
    cout<<endl;
    return 0;
}
