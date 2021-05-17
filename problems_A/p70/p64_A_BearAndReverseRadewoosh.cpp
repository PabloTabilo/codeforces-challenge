#include<iostream>

using namespace std;

int main(){
    int n, c;
    cin>>n>>c;
    int P[n];
    int p;
    for(int i=0;i<n;i++){
        cin>>p;
        P[i]=p;
    }
    int T[n];
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        T[i]=t;
    }
    int pts_l=0;
    int t_l=0;
    int pts_r=0;
    int t_r=0;
    for(int i=0;i<n;i++){
        t_l+=T[i];
        pts_l+=max(0, P[i]-c*t_l);
        t_r+=T[n-1-i];
        pts_r+=max(0, P[n-1-i]-c*t_r);
    }
    if(pts_l>pts_r)
        cout<<"Limak";
    else if(pts_r>pts_l)
        cout<<"Radewoosh";
    else
        cout<<"Tie";
    cout<<endl;
    return 0;
}
