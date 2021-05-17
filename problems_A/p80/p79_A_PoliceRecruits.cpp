#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int res=0;
    int savePos=0;
    while(n--){
        cin>>x;
        if(x>0){
            savePos+=x;
        }else{
            if(savePos>0){
                res+=(x+1);
                savePos--;
            }
            else
                res += x;
        }
        //cout<<"x: "<<x<<endl;
        //cout<<"savePos: "<<savePos<<endl;
        //cout<<"res: "<<res<<endl;
    }
    cout<<res*-1<<endl;
    return 0;
}
