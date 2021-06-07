#include <cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<iterator>
#include<stack>
#include<set>
#include<unordered_map>
#include<map>
#include<math.h>
#include<limits>
#include<iomanip>
#include<sstream>

using namespace std;

void prA(int **A, int n, int m){
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL); 
    int n, m;
    cin>>n>>m;
    stack<int> s0_i;
    stack<int> s0_j;
    int **A = new int*[n];
    bool pos = true;
    bool not0 = true;
    int sum = 0;
    for(int i = 0; i < n; i++)
        A[i] = new int[m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            scanf("%d", &A[i][j]);
            if(A[i][j] == 0){
                not0 = false;
                s0_i.push(i);
                s0_j.push(j);
            }
            if(j>0&&A[i][j-1] >= A[i][j] && not0)
                pos = false;
            sum+=A[i][j];
        }
    }
    for(int j = 0; j<m;j++){
        for(int i = 0; i<n;i++){
            if(i>0&&A[i-1][j] >= A[i][j] && not0)
                pos = false;
        }
    }
    //prA(A, n, m);
    int lm1 = -2, lm2 = -2, lm = -2, rm = -2;
    while(!s0_i.empty() && pos){
        int x = s0_i.top();
        int y = s0_j.top();
        rm = min(A[x+1][y], A[x][y+1]);
        int i = x-1;
        bool change = false;
        while(i >= 0 && !change){
            if(A[i][y]!=0){
                lm1 = A[i][y];
                change = true;
            }
            i--;
        }
        int j = y-1;
        change = false;
        while(j >= 0 && !change){
            if(A[x][j]!=0){
                lm2 = A[x][j];
                change = true;
            }
            j--;
        }
        lm = max(lm1, lm2);
        //cout<<"x: "<<x<<"; y: "<<y<<"; rm: "<<rm<<"; lm: "<<lm<<"; lm1: "<<lm1<<"; lm2: "<<lm2<<endl;
        if(rm-1 > lm){
            A[x][y] = rm-1;
            sum+=A[x][y];
        }else{
            pos = false;
        }
        s0_i.pop();
        s0_j.pop();
    }
    if(pos)
        cout<<sum;
    else
        cout<<-1;
    cout<<endl;
    //prA(A, n, m);
    return 0;
}
