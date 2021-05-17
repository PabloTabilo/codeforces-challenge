#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    cin.ignore();
    string s1;
    getline(cin, s1);
    int A[101]={0};
    int firstFound=999;
    for(int i=0;i<n;i++){
        if(s1[i]=='#')
            A[i]=-10;
        if(s1[i]=='G'){
            firstFound=min(firstFound, i);
            A[i]=1;
        }if(s1[i]=='T'){
            firstFound=min(firstFound, i);
            A[i]=1;
        }if(s1[i]=='.')
            A[i]=0;
    }
    bool foundFeasible=false;
    //cout<<firstFound<<endl;
    //cout<<k<<endl;
    for(int i=firstFound+k;i<n;i+=k){
        //cout<<s1[i]<<" : "<<A[i]<<endl;
        if(A[i] == 1){
            foundFeasible=true;
            break;
        }else if(A[i]<0){
            break;
        }
    }
    if(foundFeasible)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
