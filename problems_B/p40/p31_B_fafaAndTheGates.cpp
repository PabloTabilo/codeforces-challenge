#include<iostream>

using namespace std;

int main(){
    int n;
    char m;
    cin>>n;
    int res=0;
    int x=0, y=0, lastX=0, lastY=0;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m=='U'){
            x+=1;
        }else{
            y+=1;
        }
        if(i==0){
            lastX=x;
            lastY=y;
        }else if(x!=y){
            if((lastY < lastX && y > x) || (lastY > lastX && y < x)){
                res++;
                lastX=x;
                lastY=y;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
