#include<iostream>
#include <set>

using namespace std;

int main(){
    int n, x;
    cin>>n;
    cin.ignore();
    int mid = n/2;
    int mid_val = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            if(i == mid && j == mid)
                mid_val = x;
            // Soy diagonal
            if(i == j)
                res+=x;
            // Soy diagonal inv
            if(abs(i + j) == n-1)
                res+=x;
            // Soy middle row
            if(i == mid)
                res+=x;
            // Soy middle col
            if(j == mid)
                res+=x;
        }
    }
    cout<<res-(3*mid_val)<<endl;
    return 0;
}
