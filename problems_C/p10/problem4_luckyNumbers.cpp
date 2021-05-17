#include <iostream>
//#include <bits/stdc++.h>
//#include <vector> 
//#include <string>
//#include <stdio.h>
//#include <unordered_map>
//#include <map>
//#include <queue>
#include <cmath>
#include <iomanip>

typedef long long int ll;

using namespace std;

int main(){
    ll n;
    ll bigPow;
    cin>>n;
    bigPow = pow(2,n);
    cout<<fixed<<2*(bigPow-1)<<'\n';
    return 0;
}
