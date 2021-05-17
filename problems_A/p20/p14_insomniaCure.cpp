#include<iostream>

using namespace std;

int main(){
    int k, l, m, n, d=0;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    cin.ignore();
    int A[100000+1] = {0};
    A[0]=0;
    int res=0;
    for(int i=1;i<d+1;i++){
        A[(i*k>d?0:i*k)]=1;
        A[(i*l>d?0:i*l)]=1;
        A[(i*m>d?0:i*m)]=1;
        A[(i*n>d?0:i*n)]=1;
        res+=A[i];
    }
    cout<<res<<endl;
    return 0;
}
