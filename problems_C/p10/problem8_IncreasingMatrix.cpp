#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

void giveBest(int lb, int up, int **A, int i, int j){
    
}

int main(){
    int n, m, e, tempM, tempN;
    
    cin>>n>>m;
    cin.ignore();
    tempN = n;
    int **A = new int*[n];
    for(int i = 0; i < n; i++)
        A[i] = new int[m];
    int i = 0, j;
    
    while(tempN--){
        j = 0;
        tempM = m;
        while(tempM--){
            scanf("%d", &e);
            A[i][j] = e;
            j++;
        }
        i++;
    }
    
    int lr, ur, uc, lc;
    int notLoop = 1;
    int se = 0;
    i = 1; j = 1;

    stack<int> si;
    stack<int> sj;
    stack<int> sub;
    stack<int> slb;
    stack<int> snv;

    int lb, ub, range, nv;
    int contador = 0;
    bool continue_v = true;
    bool haveZero = false;

    while(i < n-1){
        if(contador > 20){
            break;
        }
        j = 1;
        while(j < m-1){
            //contador++;
            if (contador > 80){
                break;
            }
            if(A[i][j] == 0){
                haveZero = true;
                if(si.size()>0 && continue_v==false){
                    lb = slb.top();
                    ub = sub.top();
                    nv = snv.top();
                    snv.pop();
                    slb.pop();
                    sub.pop();
                    nv -= 1;
                    
                    if(nv != -1 && (nv<A[i][j+1] || A[i][j+1]==0) && (nv<A[i+1][j] || A[i+1][j]==0) && nv > A[i-1][j] && nv > A[i][j-1]){
                        A[i][j] = nv;
                        continue_v = true;
                        snv.push(nv);
                        slb.push(lb);
                        sub.push(ub);
                        si.push(i);
                        sj.push(j);
                    }else{
                        A[i][j] = 0;
                        if(si.size() == 0){
                            notLoop = -1;
                            break;
                        }
                        i = si.top();
                        j = sj.top();
                        A[i][j] = 0;
                        continue_v = false;
                    }
                }else{
                    //cout<<"0!"<<endl;
                    //cout<<"i: "<<i<<" ";
                    //cout<<"j: "<<j<<" ";
                    //cout<<endl;
                    lr = -1, ur = -1;
                    lc = -1, uc = -1;
                    // Quiero valor minimo de columna 
                    // y valor maximo de columna, 
                    // desde i,j hasta 1er valor != 0
                    for(int k = j-1; k >= 0; k--){
                        if(A[i][k] != 0){
                            lc = A[i][k];
                            break;
                        }
                    }
                    for(int k = j+1; k < m; k++){
                        if(A[i][k] != 0){
                            uc = A[i][k];
                            break;
                        }
                    }
                    // Quiero valor minimo de fila y 
                    // maximo de fila, 
                    // desde i,j hasta 1er valor != 0
                    for(int k = i-1; k >= 0; k--){
                        if(A[k][j] != 0){
                            lr = A[k][j];
                            break;
                        }
                    }
                    for(int k = i+1; k < n; k++){
                        if(A[k][j] != 0){
                            ur = A[k][j];
                            break;
                        }
                    }

                    lb = max(lr, lc); 
                    ub = min(ur, uc);
                    range = (ub - lb)-1;
                    nv = -1;
                    // Si rango es 0, entonces ub == lb
                    if(range > 0){
                        nv = ub - 1;
                        // Todo correcto, dejamos track
                        // de la info sobre el valor i,j
                        si.push(i);
                        sj.push(j);
                        sub.push(ub);
                        slb.push(lb);
                        snv.push(nv);
                    }

                    if(nv != -1 && (nv<A[i][j+1] || A[i][j+1]==0) && (nv<A[i+1][j] || A[i+1][j]==0) && nv > A[i-1][j] && nv > A[i][j-1]){
                        A[i][j] = nv;
                        continue_v = true;
                    }else{
                        /*
                        cout<<"No cumplo restriccion del matrix"<<endl;
                        cout<<"i: "<<i<<" ";
                        cout<<"j: "<<j<<" ";
                        cout<<"A[i][j]: "<<A[i][j]<<" "<<endl;
                        */
                        A[i][j] = 0;
                        if(si.size() == 0){
                            notLoop = -1;
                            break;
                        }
                        i = si.top();
                        j = sj.top();
                        // Saco valores malos
                        si.pop();
                        sj.pop();
                        A[i][j] = 0;
                        continue_v = false;
                    }
                }
                   /* 
                    cout<<endl;
                    cout<<"i: "<<i<<" ";
                    cout<<"j: "<<j<<" ";
                    cout<<"A[i][j]: "<<A[i][j]<<" "<<endl;
                    //cout<<"lc: "<<lc<<" ";
                    //cout<<"lr: "<<lr<<" ";
                    //cout<<"uc: "<<uc<<" ";
                    //cout<<"ur: "<<ur<<" "<<endl;
                    cout<<"lb: "<<lb<<" ";
                    cout<<"ub: "<<ub<<" ";
                    cout<<endl<<endl<<endl;
                    */
                }
            if(si.size() == 0){
                notLoop = -1;
                break;
            }
            if(continue_v){
                j++;
            }
        }
        if(notLoop != -1){
            i++;
        }else{
            break;
        }
    }
    bool checkInc = true;
    if(notLoop != -1 || haveZero == false){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                //cout<<A[i][j]<<" ";
                se += A[i][j];
                nv = A[i][j];
                
                if(j<m-1 && nv>A[i][j+1]){
                    checkInc = false;
                }
                if(i<n-1 && nv>A[i+1][j]){
                    checkInc = false;
                }
                if(i>0 && nv < A[i-1][j]){
                    checkInc = false;
                }
                if(j>0 && nv < A[i][j-1]){
                    checkInc = false;
                }
                if(checkInc == false)
                    break;
            }
            if(checkInc == false)
                break;
        }
        if(checkInc)
            cout<<se<<endl;
        else
            cout<<-1<<endl;
    }else{
        cout<<notLoop<<endl;
    }

    return 0;
}
