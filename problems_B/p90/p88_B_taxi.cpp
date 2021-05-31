#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<math.h>
#include<limits>
#include<iomanip>
#include<sstream>

#define MEM(a, b) memset(a, (b), sizeof(a))
#define _USE_MATH_DEFINES
#define PI 3.1415926535897932384626433832795

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void pV(vector<int> V, int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

void pAr(int A[], int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main(){
    int n, num;
    cin>>n;
    int contador = 0;
    int totalSum = 0;
    unordered_map<int, int> umap;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num != 4){
            totalSum += num;
            umap[num]++;
        }else
            contador++;
    }
 
    for(unordered_map<int,int>:: iterator it = umap.begin(); it != umap.end(); it++){
        int comp = 4 - it->first;
        while(it->second > 0 && umap[comp] > 0){
            if(it->first % 2 == 0){
                if(umap[2] - 2 >= 0){
                    umap[2]-=2;
                    contador++;
                }else
                    break;
            }else{
                umap[comp]--;
                umap[it->first]--;
                contador++;
            }
        }
    }
    
    
    /*
    cout<<contador<<endl;
    cout<<endl;
    cout<<umap[3]<<endl;
    cout<<umap[2]<<endl;
    cout<<umap[1]<<endl;
    cout<<endl;
    */
 
    // De aqui en adelante puedo tener:
    // 1s solos o 3 solos o un 2 solo
    // 1s y un 2 solo
    // 3s y un 2 solo
 
    if(umap[2] > 0 && umap[1] > 0){
        if(umap[1] < 3){
            contador += 1;
        }else{
            umap[1] = umap[1] - 2;
            contador += 1;
            if(umap[1] <= 4){
                contador += 1;
            }else{
                if(umap[1]%4 == 0)
                    contador += umap[1]/4;
                else
                    contador += umap[1]/4 + 1;
            }
        }
        umap[1] = 0;
        umap[2] = 0;
    }else if(umap[3] > 0 && umap[2] > 0){
        contador += umap[3] + umap[2];
        umap[3] = 0;
        umap[2] = 0;
    }else if(umap[1] > 0){
        if(umap[1] <= 4){
            contador += 1;
        }else{
            if(umap[1]%4==0){
                contador += umap[1]/4;
            }else{
                contador += umap[1]/4 + 1;
            }
        }
        umap[1] = 0;
    }else if(umap[2] > 0){
        contador += umap[2];
    }else if(umap[3] > 0){
        contador += umap[3];
    }
    
 
    cout<<contador<<endl;
    return 0;
}

