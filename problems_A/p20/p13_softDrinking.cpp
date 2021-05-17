#include<iostream>

using namespace std;


int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // Number of max Toast that can make
    int maxToast = 9999;
    maxToast = min(maxToast, (k*l)/nl);
    maxToast = min(maxToast, c*d);
    maxToast = min(maxToast, p/np);
    cout<<maxToast/n<<endl;
    return 0;
}
