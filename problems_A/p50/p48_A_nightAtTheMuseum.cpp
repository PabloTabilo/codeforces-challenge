#include<iostream>
#include<string>

using namespace std;

void initArr(int A[26][26]){
    for(int i=0;i<26;i++)
        for(int j=0;j<26;j++)
            A[i][j] = -1;
}

void printArr(int A[26][26]){
    cout<<endl;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int E[26][26];
    initArr(E);
    int dist;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            dist=abs(j-i);
            if(i <= j)
                if(dist <= 13){
                    E[i][j] = dist;
                }
                else{
                    E[i][j] = E[i][j-1] - 1;
                }
            else{
                if(dist <= 13){
                    E[i][j] = dist;
                }
                else{
                    E[i][j] = E[j][i];
                }
                
            }
        }
    }
    //printArr(E);
    string s1;
    getline(cin,s1);
    int res=0;
    int n =s1.size();
    int ascii_code=0;
    int ascii_codeLastPosition=0;
    for(int i=0;i<n;i++){
        ascii_code=s1[i];
        ascii_code-=97;
        if(i==0){
            res+=E[0][ascii_code];
            ascii_codeLastPosition=ascii_code;
        }else{
            res+=E[ascii_codeLastPosition][ascii_code]; 
            ascii_codeLastPosition=ascii_code;
        }
    }
    cout<<res<<endl;
    return 0;
}
