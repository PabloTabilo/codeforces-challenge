#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    bool lastp=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+1)%2!=0 || i+1==1){
                cout<<"#";
            }else if(lastp && j==m-1){
                cout<<"#";
                lastp=false;
            }else if(!lastp && j==0){
                cout<<"#";
            }else if(j!=0 && j!=m-1){
                cout<<".";
            }else if(lastp && j==0){
                cout<<".";
            }else if(!lastp && j==m-1){
                cout<<".";
                lastp=true;
            }
        }
        cout<<endl;
    }
    return 0;
}
