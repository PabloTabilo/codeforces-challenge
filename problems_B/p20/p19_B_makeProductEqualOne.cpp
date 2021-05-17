#include<iostream>

using namespace std;

int main(){
    int n, a;
    cin>>n;
    int num1s=0;
    int numM1s=0;
    int num0s=0;
    long long int coins=0;
    int myPi=1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>1){
            coins+=a-1;
            num1s++;
            myPi*=1;
        }else if(a<-1){
            coins+=(a+1)*-1;
            numM1s++;
            myPi*=-1;
        }else if(a==0){
            num0s++;
        }else if(a==1){
            num1s++;
            myPi*=1;
        }else{
            numM1s++;
            myPi*=-1;
        }
    }
    if(myPi==1){
        if(num0s!=0)
            coins+=num0s;
    }else{
        if(num0s!=0){
            coins+=num0s;
        }else{
            coins+=2;
        }
    }
    cout<<coins<<endl;
    return 0;
}
