#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, val;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>val;
        v1[i]=val;
    }
    sort(v1.begin(),v1.end());
    int i=0;
    int j=n-1;
    long long int x=0;
    long long int y=0;
    while(i<=j){
        if(i==j){
            x+=v1[i];
        }else{
            y+=v1[i];
            x+=v1[j];
        }
        i++;
        j--;
    }
    cout<<x*x + y*y<<endl;
    return 0;
}
