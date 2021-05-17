#include<iostream>

using namespace std;


long long int factorial(int x, int limit){
    long long int prod=1;
    for(int i=x;i>limit;i--){
        prod*=i;
        //cout<<"i : "<<i<<" prod: "<<prod<<" limit: "<<limit<<endl;
    }
    //cout<<"finnal: "<<prod<<endl;
    return prod;
}

int main(){
    int n;
    cin>>n;
    int k = n-1;
    int m = (k==0?1:k*2);
    //cout<<m<<" "<<k<<endl;
    long long int res = (k==0?1:factorial(m,k) / factorial(k,1));
    cout<<res<<endl;
    return 0;
}
