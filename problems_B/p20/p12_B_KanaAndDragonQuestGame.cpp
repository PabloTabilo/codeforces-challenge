#include<iostream>

using namespace std;

int main(){
    int t;
    int h, n, m;
    cin>>t;
    while(t--){
        cin>>h>>n>>m;
        while(n>0 && h>20){
            //cout<<"h: "<<h<<endl;
            //cout<<"n :"<<n<<endl;
            //cout<<"m :"<<m<<endl;
            //cout<<"---------------"<<endl;
            h = h/2 + 10;
            n--;
        }
        if(h - (10*m) <=0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
