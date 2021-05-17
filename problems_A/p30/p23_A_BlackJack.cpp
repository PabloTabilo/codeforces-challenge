#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cardsVals[9] = {2,3,4,5,6,7,8,9,10};
    int kingJack[2] = {10, 10};
    int rQ[1] = {10};
    int a1[1] = {1};
    int a11[1] = {11};
    
    n -= 10;
    int poss = 0;
    int res=0;
    for(int i=0;i<9;i++){
        if(cardsVals[i] == n)
           res++; 
    }
    res*=4;
    poss+=res;
    
    res = 0;
    for(int i=0;i<2;i++){
        if(kingJack[i] == n)
           res++; 
    }
    res*=4;
    poss+=res;
    
    res = 0;
    for(int i=0;i<1;i++){
        if(rQ[i] == n)
           res++; 
    }
    res*=3;
    poss+=res;
    
    res = 0;
    for(int i=0;i<1;i++){
        if(a1[i] == n)
           res++; 
    }
    res*=4;
    poss+=res;
    
    res = 0;
    for(int i=0;i<1;i++){
        if(a11[i] == n)
           res++; 
    }
    res*=4;
    poss+=res;
    cout<<poss<<endl;
    
    return 0;
}
