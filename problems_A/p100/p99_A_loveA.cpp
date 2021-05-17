#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    int a = 0;
    int n = s1.size();
    for(int i=0;i<n;i++)
        a += (s1[i]=='a'?1:0);
    if(a<=n/2)
        cout<<a + (a-1)<<endl;
    else
        cout<<n<<endl;
    return 0;
}
