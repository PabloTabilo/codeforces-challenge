#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    int mid = n/2;
    string s1;
    getline(cin, s1);
    
    bool isLucky = true;
    int firstMiddle = 0;
    int secondMiddle = 0;
    for(int i=0; i<n;i++){
        int ascii_char = s1[i];
        if(ascii_char != 52 && ascii_char != 55){
            isLucky = false;
            break;
        }
        if(i < mid){
            firstMiddle += (ascii_char==52?4:7);
        }

        if(i >= mid){
            secondMiddle += (ascii_char==52?4:7); 
        }
    }

    //cout<<firstMiddle<<endl;
    //cout<<secondMiddle<<endl;

    if(isLucky){
        if(firstMiddle == secondMiddle){
            cout<<"YES";
        }else
            cout<<"NO";
    }
    else
        cout<<"NO";
    cout<<endl;
    
    return 0;
}
