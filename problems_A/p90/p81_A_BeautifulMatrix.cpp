#include<iostream>

using namespace std;

int main(){
    int A[5][5]={0};
    int n = 5;
    int num;
    int x;
    int y;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num;
            A[i][j]=num;
            if(num!=0){
                x=i+1;
                y=j+1;
            }
        }
    }
    int res=abs(3-x) + abs(3-y);
    cout<<res<<endl;
    return 0;
}
