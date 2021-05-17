#include<iostream>

using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int res=0;
    int maxRecord = max(x1,max(x2,x3));
    int minRecord = min(x1, min(x2,x3));
    if(x1 >= minRecord && x1 <= maxRecord)
        res=(x1-minRecord)+(maxRecord - x1);
    else if(x2 >= minRecord && x2 <= maxRecord)
        res=(x2-minRecord)+(maxRecord - x2);
    else if(x3 >= minRecord && x3 <= maxRecord)
        res=(x3-minRecord)+(maxRecord - x3);
    cout<<res<<endl;
    return 0;
}
