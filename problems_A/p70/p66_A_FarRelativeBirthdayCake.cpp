#include<iostream>
#include<vector>

using namespace std;

long long int factorial(int n){
    long long int prod=1;
    for(int i=n;i>1;i--)
        prod*=i;
    return prod;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    int res=0;
    string s1;
    vector<int> nCol(n);
    int nRow;
    char c1;
    for(int i=0;i<n;i++){
        nRow=0;
        getline(cin,s1);
        for(int j=0;j<n;j++){
            c1=s1[j];
            nRow+=(c1=='C'?1:0);
            nCol[j]+=(c1=='C'?1:0);
        }
        if(nRow>1){
            res+=(nRow*(nRow-1))/2;
        }
    }
    for(int i=0;i<n;i++){
        if(nCol[i]>1){
            res+=(nCol[i]*(nCol[i]-1))/2;
        }
    }
    cout<<res<<endl;
    return 0;
}
