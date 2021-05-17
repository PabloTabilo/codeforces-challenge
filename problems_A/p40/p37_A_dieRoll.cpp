#include<iostream>

using namespace std;

int main(){
    int y, w;
    cin>>y>>w;
    int best = max(y,w);
    int res=0;
    int A=res;
    int B=6;
    if(best>0){
        for(int i=best;i<7;i++){
            res++;
        }
        A=res;
        //cout<<res<<endl;
        if(res==6){
            A=1;
            B=1;
        }else if(res==0){
            A=0;
            B=1;
        }else if(res%2==0 && res!=1){
            A=res/2;
            B=3;
        }else if(6%res==0 && res!=1){
            A=1;
            B=6/res;
        }
    }else{
        B=1;
    }
    cout<<A<<"/"<<B<<endl;
    return 0;
}
