#include<iostream>

using namespace std;

int main(){
    int n,a;
    cin>>n;
    int minV=100001, lastMin=0;
    int maxV=0, lastMax=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(maxV <= a){
            lastMax=maxV;
            maxV=a;
        }else if(lastMax==0){
            if(a<maxV && lastMax <= a)
                lastMax=a;
        }else if(a <= maxV && lastMax <= a){
            lastMax=a;
        }
        if(minV >= a){
            lastMin=minV;
            minV=a;
        }else if(lastMin==100001){
            if(a>minV && lastMin >= a)
                lastMin=a;
        }else if(a >= minV && lastMin >= a){
            lastMin=a;
        }
    }
    //cout<<maxV<<endl;
    //cout<<lastMax<<endl;
    //cout<<minV<<endl;
    //cout<<lastMin<<endl;
    int el_min=abs(maxV-lastMin);
    int el_max=abs(lastMax-minV);
    if(el_min < el_max)
        cout<<el_min;
    else
        cout<<el_max;
    cout<<endl;
    return 0;
}
