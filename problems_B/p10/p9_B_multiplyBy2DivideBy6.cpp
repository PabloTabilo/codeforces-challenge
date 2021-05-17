#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int res=0;
        while(n!=1){
            if(n%6==0){
                n/=6;
                res++;
            }else{
                if((2*n)%6==0){
                    n*=2;
                    res++;
                }else{
                    res=-1;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
