#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> A(n);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        A[i]=a;
    }
    int best=0;
    sort(A.begin(), A.end());
    int i=0;
    while(i<m){
        if(A[i]<=0)
            best+=A[i];
        i++;
    }
    best*=-1;
    cout<<best<<endl;
    return  0;
}
