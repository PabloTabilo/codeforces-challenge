#include<iostream>

using namespace std;

int gcd(int x1, int x2){
    int res = -1;
    int x = min(x1, x2);
    for(int i=1;i<x+1;i++){
        if(x1%i==0 && x2%i==0 && x1!=0 && x2!=0)
            res = max(res, i);
    }
    return res;
}

int main(){
    int a, b, n;
    cin>>a>>b>>n;
    bool res = false;
    //int contador = 0;
    while(n){
        //contador++;
        int gcd_a = gcd(a,n);
        if( n==0 || (n < gcd_a && gcd_a>0)){
            res = false;
            n = 0;
            break;
        }else
            n-=gcd_a;
        //cout<<n<<endl;
        int gcd_b = gcd(b, n);
        if(n==0 || (n < gcd_b && gcd_b>0)){
            res = true;
            n = 0;
            break;
        }else
            n-=gcd_b;
        //cout<<n<<endl;
        //if(contador > 20){
        //    n = 0;
        //    break;
        //}
    }

    //cout<<contador<<endl;

    if(res)
        cout<<"0";
    else
        cout<<"1";
    cout<<endl;
    return 0;
}
