#include<iostream>
#include<set>

using namespace std;

int main(){
    int t, n, num;
    cin>>t;
    while(t--){
        cin>>n;
        set <int> s1;
        for(int i=0;i<n;i++){
            cin>>num;
            s1.insert(num);
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}
