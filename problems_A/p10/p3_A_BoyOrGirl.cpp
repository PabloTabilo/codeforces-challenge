#include <iostream>
#include <string>

using namespace std;

// a : 97
// z : 122 

int main(){
    // 122 - 97 + 1 = 26;
    int A[26] = {0};
    string name;
    getline(cin, name);
    int m = name.size(), pos;
    int duplicates = 0;
    for(int i = 0; i < m; i++){
        int pos = name[i];
        A[pos-97]++;
        if(A[pos-97] > 1){
            duplicates++;
        }
    }
    int uniques = m - duplicates;
    //cout<<uniques<<endl;
    if(uniques%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    cout<<'\n';

    return 0;
}
