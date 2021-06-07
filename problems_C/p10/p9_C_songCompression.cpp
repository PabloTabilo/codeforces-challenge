#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m, temp, num, a, b;
    cin>>n>>m;
    temp = n;
    int data[n][2];
    cin.ignore();
    int i = 0;
    long long int notCompression = 0;
    vector<int> d(n);
    while(temp--){
        cin>>a>>b;
        data[i][0] = a;
        data[i][1] = b;
        notCompression+=a;
        d[i] = data[i][0] - data[i][1];
        i++;
    }
   
    sort(d.begin(), d.end(), greater<int>());
    if(notCompression > m){ 
        bool isCheck = false;
        for(int i = 0; i < n; i++){
            notCompression -= d[i];
            if(notCompression <= m){
                cout<<i+1<<endl;
                isCheck = true;
                break;
            }
        }
        if(!isCheck)
            cout<<-1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
