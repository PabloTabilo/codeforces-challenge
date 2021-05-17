#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    vector <int> v1(4);
    v1[0]=x1;
    v1[1]=x2;
    v1[2]=x3;
    v1[3]=x4;
    sort(v1.begin(), v1.end(), greater <int>());
    int max1 = v1[0];
    int c = max1 - v1[1];
    int a = v1[2] - c;
    int b = v1[3] - c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
