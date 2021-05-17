#include<iostream>
#include<string>

using namespace std;


int main(){
    string s1;
    getline(cin, s1);
    int n = s1.size();
    int contador=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='4' || s1[i]=='7')
            contador++;
    }
    //cout<<contador<<endl; 
    string cont = to_string(contador);
    int nc = cont.size();
    bool sizeLucky=true;
    for(int i=0;i<nc;i++){
        if(cont[i]!='4' && cont[i]!='7'){
            sizeLucky=false;
            break;
        }
    }
    if(sizeLucky)
          cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
