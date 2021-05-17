#include<iostream>

using namespace std;

int main(){
    int n, c;
    cin>>n>>c;
    int x;
    int last_x;
    int res=1;
    int dist=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0){
            last_x=x;
        }else{
            dist = abs(x - last_x);
            if(dist<=c){
                res+=1;
            }else{
                res=1;
            }
            last_x=x;
        }
        //cout<<"x: "<<x<<endl;
        //cout<<"last_x: "<<last_x<<endl;
        //cout<<"dist: "<<dist<<endl;
        //cout<<"res: "<<res<<endl;
        //cout<<"---------------"<<endl;
    }
    cout<<res<<endl;
    return 0;
}
