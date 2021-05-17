#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    int minVal = 4*n+n/2+(n%2==0?0:1);
    int G[6]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        G[x]++;
    }
    int res=0;
    int resNum=G[5]*5+G[2]*2+G[3]*3+G[4]*4;
    //cout<<G[2]<<endl;
    //cout<<G[3]<<endl;
    //cout<<G[4]<<endl;
    //cout<<resNum<<endl;
    //cout<<minVal<<endl;
    while(resNum<minVal){
        if(G[2]>0){
            G[2]-=1;
            G[5]+=1;
        }else if(G[3]>0){
            G[3]-=1;
            G[5]+=1;
        }else{
            G[4]-=1;
            G[5]+=1;
        }
        res++;
        resNum=G[5]*5+G[2]*2+G[3]*3+G[4]*4;
    }
    cout<<res<<endl;
    return 0;
}
