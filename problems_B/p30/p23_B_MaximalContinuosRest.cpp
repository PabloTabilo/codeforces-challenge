#include<iostream>

using namespace std;

int main(){
    int n, a;
    cin>>n;
    int cont=0;
    int contMax=0;
    int *p=new int[n];
    bool existLast1=false;
    bool existOne0=false;
    for(int i=0;i<n;i++){
        cin>>a;
        p[i]=a;
        if(a==1){
            cont++;
            contMax=max(contMax, cont);
        }else{
            cont=0;
            existOne0=true;
        }
        if(i==n-1 && a==1 && existOne0){
            existLast1=true;
        }
    }
    if(!existLast1){
        cout<<contMax;
    }else{
        cont=0;
        // left to right
        for(int i=0;i<n;i++){
            if(p[i]==1){
                cont++;
            }else{
                break;
            }
        }
        // right to left
        for(int i=n-1;i>=0;i--){
            if(p[i]==1){
                cont++;
            }else{
                break;
            }
        }
        cout<<max(contMax, cont);
    }
    cout<<endl;
    return 0;
}
