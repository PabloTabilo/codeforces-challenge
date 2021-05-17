#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    int res=0;
    int combination;
    string str1;
    for(int i=0;i<n;i++){
        getline(cin, str1);
        combination = str1[0] + str1[1] + str1[2] - 'X';
        if(combination == 43*2){
            res++;
        }else{
            res--;
        }
    }
    cout<<res<<endl;
    return 0;
}
