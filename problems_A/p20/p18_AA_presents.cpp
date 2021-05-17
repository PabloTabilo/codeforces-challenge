#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int A[n];
    for(int i=0;i<n;i++){
        //A[i] = 0;
        cin>>x;
        A[x-1] = i+1;
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
