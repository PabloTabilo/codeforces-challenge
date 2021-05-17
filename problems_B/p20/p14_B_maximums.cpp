#include<iostream>
using namespace std;

int main(){
    int n;
    long long int num;
    cin>>n;
    long long int A[n+1];
    long long int X[n+1];
    for(int i=0;i<n+1;i++){
        A[i]=0;
        X[i]=0;
    }
    for(int i=1;i<n+1;i++){
            cin>>num;
            if(i==1){
                A[1]=num;
                X[1]=0;
            }else{
                X[i]=max(X[i-1],A[i-1]);
                A[i]=num+X[i];
            }
        }
    for(int i=1;i<n+1;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
