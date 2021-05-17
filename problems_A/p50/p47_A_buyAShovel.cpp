#include<iostream>
#include<cmath>

using namespace std;

bool isInteger(double x){
    return floor(x)==x;
}

int main(){
    double k, r;
    cin>>k>>r;
    double temp_r=0;
    double temp=0;
    double res=0;
    if(k!=r){
        for(int i=0;i<1000000;i++){
            temp_r=(10*i+r)/k;
            temp=(10*i)/k;
            if(isInteger(temp_r) && temp_r!=0){
                res=temp_r;
                break;
            }
            if(isInteger(temp) && temp!=0){
                res=temp;
                break;
            }
        }
    }else{
        res=1;
    }
    cout<<res<<endl;
    return 0;
}
