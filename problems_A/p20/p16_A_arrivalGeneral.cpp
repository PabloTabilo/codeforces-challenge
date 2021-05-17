#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    cin.ignore();
    int minRecord = 9999;
    int idxMin = n-1;

    int maxRecord = -1;
    int idxMax = 0;

    for(int i = 0; i<n; i++){
        cin>>x;
        if(maxRecord < x){
            maxRecord = x;
            idxMax = i;
        }
        if(minRecord >= x){
            minRecord = x;
            idxMin = i;
        }
    }
    //cout<<maxRecord<<endl;
    //cout<<idxMax<<endl;
    //cout<<minRecord<<endl;
    //cout<<idxMin<<endl;
    int res = idxMax + (n-1 - idxMin);
    if(idxMax < idxMin)
        cout<<res;
    else
        cout<<res-1;
    cout<<endl;
    return 0;
}
