#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s1;
    string res="";
    bool foundSol=false;
    for(int i=0;i<n;i++){
        getline(cin, s1);
        int save_j=0;
        bool firstTime=true;
        if(!foundSol){
            for(int j=0;j<5;j++){
                if(s1[j]=='O' && firstTime){
                    save_j=j;
                    firstTime=false;
                }else if(s1[j]=='O'){
                    //cout<<"j: "<<j<<endl;
                    //cout<<"save_j: "<<save_j<<endl;
                    int dist = j-save_j;
                    //cout<<"dist: "<<dist<<endl;
                    if(dist==1){
                        //found pairs
                        foundSol=true;
                        s1[save_j]='+';
                        s1[j]='+';
                        break;
                    }
                    save_j=j;
                }
            }
        }
        if(i==n-1)
            res+=s1;
        else
            res+=s1+'\n';
    }
    if(foundSol){
        cout<<"YES"<<endl;
        cout<<res<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
