#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> qe;
    priority_queue<int> qo;
    int n, x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            if(x%2==0)
                qe.push(x);
            else
                qo.push(x);
        }else
            qe.push(x);
    }
    bool qeM=false;
    bool same=qe.size()==qo.size();
    if(qe.size()>qo.size()){
        qeM=true;
    }
    while(!qe.empty()&&!qo.empty()){
        qe.pop();
        qo.pop();
    }
    int res=0;
    if(!same){
        if(qeM){
            qe.pop();
            while(!qe.empty()){
                res+=qe.top();
                qe.pop();
            }
        }else{
            qo.pop();
            while(!qo.empty()){
                res+=qo.top();
                qo.pop();
            }
        }
        cout<<res;
    }else{
        cout<<0;
    }
    cout<<endl;
    return 0;
}
