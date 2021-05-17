#include<iostream>

using namespace std;

int main(){
    int q, res;
    long long int n;
    cin>>q;
    while(q--){
        cin>>n;
        res=0;
        while(n>1){
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n=(2*n)/3;
            else if(n%5==0)
                n=(4*n)/5;
            else{
                res=-1;
                break;
            }
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
