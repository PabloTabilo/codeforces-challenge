#include<iostream>

using namespace std;

int main(){
    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    int road1 = d1+d2+d3;
    int road2 = d1+d3+d3+d1;
    int road3 = d2+d2+d1+d1;
    int road4 = d2+d3+d3+d2;
    //cout<<road1<<endl;
    //cout<<road2<<endl;
    //cout<<road3<<endl;
    //cout<<road4<<endl;
    int res = min(road4,min(road3,min(road1, road2)));
    cout<<res<<endl;
    return 0;
}
