#include<iostream>
#include<string>
#include<queue>
#include<utility>
#include<vector>


using namespace std;

int main(){
    string str1;
    getline(cin, str1);
    string alz="";
    
    for(int i=0;i<str1.size();i++){
        if(str1[i]=='Q' || str1[i]=='A'){
            alz+=str1[i];
        }
    }
    
    int n = alz.size();
    int numQ=0;
    int numA=0;
    int res=0;
    vector<int>As(n);
    for(int i=n-1;i>=0;i--){
        if(alz[i] == 'Q'){
            numQ++;
            if(numA>0){
                for(int j=i; j<n;j++){
                    res+=As[j];
                }
            }
            
        }else{
            numA++;
            if(numQ > 0){
                As[i] = numQ;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
