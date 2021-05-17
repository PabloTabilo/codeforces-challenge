#include<iostream>

using namespace std;

bool isPrime(int x){
    bool res = true;
    for(int i=2;i<x;i++){
        if(x%i==0 && x!=i){
            res=false;
            break;
        }
    }
    return res;
}

int main(){
    int n, x;
    cin>>n;
    int res=0;
    for(int m=1;m<1001;m++){
        x = (n*m)+1;
        if(!isPrime(x)){
            res=m;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}
