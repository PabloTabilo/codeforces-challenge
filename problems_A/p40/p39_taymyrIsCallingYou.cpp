#include<iostream>

using namespace std;

int main(){
    int n, m, z;
    cin>>n>>m>>z;
    int A[z+1];
    int res=0;
    for(int i=0;i<z+1;i++)
        A[i]=0;
    for(int i=1;i<z+1;i++){
        if(n*i<z+1)
            A[n*i]++;
        if(m*i<z+1)
            A[m*i]++;
        if(A[i]>1)
            res++;
    }
    cout<<res<<endl;
    return 0;
}
