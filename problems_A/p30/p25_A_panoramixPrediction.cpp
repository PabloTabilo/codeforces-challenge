#include<iostream>

using namespace std;

int checkPrime(int x){
    int res = 1;
    for(int i=2; i<10; i++){
        if(x%i==0 && x != i){
            res = 0;
            break;
        }
    }
    return res;
}

int main(){

    int A[51] = {0};
    for(int i=2; i<51;i++){
        A[i] = checkPrime(i);
    }
    int n, m;
    cin>>n>>m;
    int res=0;
    for(int i=n+1;i<51;i++){
       //cout<<i<<" : "<<A[i]<<endl;
        if(A[i]==1){
            res = i;
            break;
        }
    }
    //cout<<res<<endl;
    if(res == m)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
