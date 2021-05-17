#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
    }
    int resS=0;
    int resD=0;
    int i=1;
    int j=0;
    int k=n-1;
    while(j<k){
        int leftCard=A[j];
        while(A[j] == -1){
            j++;
            leftCard=A[j];
        }
        
        int rightCard=A[k];
        while(A[k] == -1){
            k--;
            rightCard=A[k];
        }

        if(leftCard >= rightCard){
            A[j] = -1;
            resS += (i%2!=0?leftCard:0);
            resD += (i%2==0?leftCard:0);
        }else{
            A[k] = -1;
            resS += (i%2!=0?rightCard:0);
            resD += (i%2==0?rightCard:0);
        }
        i++;
    }
    if(i==1)
        resS+=A[0];
    cout<<resS<<" "<<resD<<endl;
    return 0;
}
