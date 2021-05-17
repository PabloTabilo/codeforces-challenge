#include<iostream>

using namespace std;

double partialSum(int n){
    bool pair=false;
    if(n<=0)
        return 0;
    double res=0.0;
    if(n>=2)
        pair=(n%2==0?true:false);
    res = .25*(-2*n-2);
    if(pair)
        res = .25*2*n;
    //cout<<"Para n = "<<n<<" , res: "<<res<<endl;
    return res;
}

int main(){
    int q;
    int l, r;
    int res;
    cin>>q;
    while(q--){
        cin>>l>>r;
        res = partialSum(r) - partialSum(l-1);
        cout<<res<<endl;
    }
}
