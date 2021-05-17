#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    int x,y;
    long long int res;
    int maxV=0;
    int bX, bY;
    cin>>n;
    while(n--){
        cin>>x>>y;
        res = x + y;
        if(maxV<res){
            bX=x;
            bY=y;
            maxV=res;
        }
    }
    cout<<bY+bX<<endl;
    return 0;
}
