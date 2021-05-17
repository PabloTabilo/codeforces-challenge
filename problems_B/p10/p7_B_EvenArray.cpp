#include<iostream>

using namespace std;

int main(){
    int t, n, num;
    cin>>t;
    while(t--){
        cin>>n;
        int num2s=n/2;
        int res=0;
        int possible=0;
        for(int i=0;i<n;i++){
            cin>>num;
            possible+=num%2;
            res+=(num%2==i%2?0:1);
        }
        //cout<<possible<<" : "<<num2s<<endl;
        if(possible==num2s){
            cout<<res/2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
