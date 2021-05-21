#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<math.h>
#include<limits>
#include<iomanip>
#include<sstream>

#define MEM(a, b) memset(a, (b), sizeof(a))

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int n, num;
    cin>>n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        v1[i] = num;
    }
    sort(v1.begin(), v1.end(), greater<int>());
    int a, b, c;
    bool check = false;
    for(int i = 0; i < n; i++){
        if(i+2 < n){
            a = v1[i];
            b = v1[i+1];
            c = v1[i+2];
            if(a+b>c && a+c>b && b+c>a){
                check = true;
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    if(!check)
        cout<<"NO"<<endl;
    return 0;
}

