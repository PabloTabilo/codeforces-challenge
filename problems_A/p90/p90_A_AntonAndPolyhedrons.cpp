#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    int res = 0;
    string str1;
    while(n--){
        getline(cin, str1);
        if(str1 == "Tetrahedron"){
            res+=4;
        }
        if(str1 == "Cube"){
            res+=6;
        }
        if(str1 == "Octahedron"){
            res+=8;
        }
        if(str1 == "Dodecahedron"){
            res+=12;
        }
        if(str1 == "Icosahedron"){
            res+=20;
        }
    }
    cout<<res<<endl;
    return 0;
}
