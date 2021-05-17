#include <iostream>

using namespace std;



int main(){
    int n, x;
    cin>>n;
    cin.ignore();
    //int A[n];
    int maxRecord;
    int minRecord;
    int res=0;
    for(int i = 0; i<n;i++){
        cin>>x;
        if(i == 0){
            maxRecord = x;
            minRecord = x;
        }else if(maxRecord < x){
            maxRecord = x;
            res++;
        }else if(minRecord > x){
            minRecord = x;
            res++;
        }
    }
    cout<<res<<'\n';
    return 0;
}
