#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
    }
    int minDist=9999;
    int bestIdx1;
    int bestIdx2;
    int idx1=0;
    int idx2=0;
    int dist=0;
    for(int i=0;i<n;i++){
        if(i+1<n){
            idx1=i;
            idx2=i+1;
            dist = abs(A[i] - A[i+1]);
        }else{
            idx1=n-1;
            idx2=0;
            dist = abs(A[n-1] - A[0]); 
        }

        if(minDist > dist){
            bestIdx1=idx1;
            bestIdx2=idx2;
            minDist = dist;
        }
    }
    cout<<bestIdx1+1<<" "<<bestIdx2+1<<endl;
    return 0;
}
