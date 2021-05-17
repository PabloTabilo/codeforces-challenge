#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    cin.ignore();
    int res=0;
    int l;
    int mOn;
    for(int i=1;i<n+1;i++){
        mOn=0;
        for(int j=1;j<2*m+1;j++){
            cin>>l;
            mOn+=l;
            //cout<<"lectura l : "<<l<<endl;
            //cout<<"idx j : "<<j<<endl;
            //cout<<"mOn l : "<<mOn<<endl;
            if(j%2==0 && j!=1){
                if(mOn>0)
                    res++;
                mOn=0;
            }
        }
        //cout<<res<<endl;
    }
    cout<<res<<endl;
    return 0;
}
