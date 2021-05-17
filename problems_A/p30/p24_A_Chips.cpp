#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int a = (n*(n+1))/2;
    int t = m/a;
    m-=(t*a);
    for(int i=1;i<n+1;i++){
        if(m-i>0){
            m-=i;
        }
        else if(m-i==0){
            m-=i;
            break;
        }
        else if(m-i<0){
            break;
        }
    }
    cout<<m<<endl;
    return 0;
}
