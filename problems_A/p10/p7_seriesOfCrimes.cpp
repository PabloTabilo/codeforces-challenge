#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    cin.ignore();
    string matrix1[n];
    int selectRow; 
    int selectCol;
    int contar;
    for(int i = 0; i < n; i++){
        string line1;
        getline(cin, line1);
        matrix1[i] = line1;
        contar = 0;
        for(int j = 0; j < m; j++){
            if(line1[j]=='*')
                contar+=1;
        }
        if(contar == 1)
            selectRow = i;
    }
    for(int j = 0; j < m; j++){
        contar = 0;
        for(int i = 0; i < n; i++){
            if(matrix1[i][j] == '*')
                contar+=1;
        }
        if(contar == 1){
            selectCol = j;
            break;
        }
    }
    cout<<selectRow+1<<" "<<selectCol+1<<endl;
    return 0;
}
