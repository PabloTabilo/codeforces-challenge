#include<iostream>

using namespace std;

void printPointer(int **p, int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool validPosition(int **p, int i, int j, int component){
    int res = p[i][j] + p[i+1][j] + p[i-1][j] + p[i][j+1] + p[i][j-1];
    if(res==0){
        p[i][j]=999+component;
        p[i+1][j]=999+component;
        p[i-1][j]=999+component;
        p[i][j+1]=999+component;
        p[i][j-1]=999+component;
        return true;
    }
    return false;
}

int main(){
    int n;
    char x;
    cin>>n;
    int **p= new int*[n];
    int num0s=0;
    for(int i=0;i<n;i++){
        p[i] = new int[n];
        for(int j=0;j<n;j++){
           cin>>x;
           if(x=='#')
               p[i][j]=-1;
           else{
               p[i][j]=0;
               num0s++;
           }
        }
    }
    //printPointer(p, n);
    int comp=1;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(p[i][j] == 0){
               if(validPosition(p,i,j,comp)){
                   comp++;
                   num0s-=5;
               }
            }
        }
    }
    //printPointer(p, n);
    if(num0s == 0)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    return 0;
}
