#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x, y;
    int left=0;
    int right=0;
    while(n--){
        cin>>x>>y;
        if(x>=0)
            right++;
        else
            left++;
    }
    if(left<2 || right<2)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
