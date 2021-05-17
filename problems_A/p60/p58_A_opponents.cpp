#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, d; 
    cin>>n>>d;
    cin.ignore();
    string s1;
    int winConsecutive=0;
    int res=0;
    int numOpponents;
    for(int i=0;i<d;i++){
        getline(cin, s1);
        numOpponents=0;
        for(int j=0;j<n;j++){
            if(s1[j] == '1')
                numOpponents++;
        }
        if(numOpponents < n){
            winConsecutive++;
            res=max(res, winConsecutive);
        }else{
            winConsecutive=0;
        }
    }
    cout<<res<<endl;
    return 0;
}
