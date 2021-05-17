#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    int res=0;
    if(x%5==0){
        res=x/5;
    }else if(x>5){
        res=x/5 + 1;
    }else{
        res++;
    }
    cout<<res<<endl;
    return 0;
}
