#include<iostream>

using namespace std;

int main(){
    int n;
    long long int x;
    cin>>n>>x;
    cin.ignore();
    char carrierOrBoy;
    int indig=0;
    int distress=0;
    for(int i=0;i<n;i++){
        cin>>carrierOrBoy>>indig;
        if(carrierOrBoy=='+'){
            x+=indig;
        }else{
            if(x >= indig){
                x-=indig;
            }else{
                distress++;
            }
        }
    }
    cout<<x<<" "<<distress<<endl;
    return 0;
}
