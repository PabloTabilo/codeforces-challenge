#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m, c;
    int wins_m=0; 
    int wins_c=0;
    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c)
            wins_m++;
        if(c>m)
            wins_c++;
    }
    if(wins_m>wins_c)
        cout<<"Mishka";
    else if(wins_c>wins_m)
        cout<<"Chris";
    else if(wins_m==wins_c)
        cout<<"Friendship is magic!^^";
    cout<<endl;
    return 0;
}
