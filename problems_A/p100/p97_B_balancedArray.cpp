#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int cand=n/2;
        if(cand>1 && cand%2==0){
            cout<<"YES"<<endl;
            for(int i=1;i<cand+1;i++){
                cout<<2*i<<" ";
            }
            for(int i=0;i<cand;i++){
                if(i!=cand-1)
                    cout<<2*i+1<<" ";
                else
                    cout<<2*i+1+cand;
            }
        }else{
            cout<<"NO";
        }
        cout<<'\n';
    }
    return 0;
}
