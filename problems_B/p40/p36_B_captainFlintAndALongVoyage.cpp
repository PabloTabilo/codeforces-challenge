#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        string res="";
        int nums8=n/4;
        int nums9=n - nums8;
        if(n%4!=0)
            nums9-=1;
        for(int i=1;i<n+1;i++){
            if(i <= nums9)
                res+="9";
            else
                res+="8";
        }
        cout<<res<<endl;
    }
    return 0;
}
