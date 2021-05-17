#include <iostream>
#include <string>

using namespace std;

int main(){
    int t, n;
    string inStr;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin, inStr);
        n = inStr.size();
        int Rjump[n+2];
        for(int i = 0; i < n; i++){
            if(inStr[i] == 'R')
                Rjump[i+1] = i+1;
            else
                Rjump[i+1] = -1;
        }

        Rjump[0] = 0;
        Rjump[n+1] = n+1;
        
        int first = -1, second = -1, ans = 0;
        bool f = false, s = false;
        for(int i = 0; i < n+2; i++){
            if(Rjump[i] != -1 && f == false && first == -1){
                first = Rjump[i];
                f = true;
            } else if(Rjump[i] != -1 && s ==false && second == -1){
                second = Rjump[i];
                s = true;
            }
            if(f && s){
                s = false;
                ans = max(second - first, ans);
                first = second;
                second = -1;
            }
        }

        cout<<ans<<endl;
        
    }
    return 0;
}
