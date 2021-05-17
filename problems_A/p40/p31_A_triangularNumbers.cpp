#include<iostream>

using namespace std;

int main(){
    int A[501] = {0};
    int pos;
    for(int i=0;i<32;i++){
        pos = (i*(i+1))/2;
        A[pos] = 1;
    }
    int n;
    cin>>n;
    if(A[n] == 1)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;    
}
