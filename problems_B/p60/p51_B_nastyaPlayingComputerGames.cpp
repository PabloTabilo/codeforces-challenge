#include<iostream>

using namespace std;


void printArr(int *A, int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, k;
    cin>>n>>k;
    int* A = new int[n];
    int* H = new int[n];
    int sizeWalk = n;

    for(int i=0; i<n;i++){
        A[i] = 2;
        H[i] = 0;

    }

    k =k-1;
    int saveK = k;
    int res = 0;
    int distance0 = abs(k-0);
    int distanceN = abs(n-1-k);
    bool firstTime = true;
    int contador = 0;
    while(sizeWalk>0){
        //contador++;
        if (firstTime && distance0 != 0 && distanceN != 0){ 
            // Si estoy mas cercano a 0,
            // prefiero dejar la piedra en
            // el vecino mas cercano a 0,
            // y moverme a la derecha
            if(distance0 < distanceN){
                k = 0;
                res+=distance0;
            }
            // Si estoy mas cercano a n,
            // prefiero dejar la piedra en
            // el vecino mas cercano a n
            // y moverme a la izquierda
            else if (distance0 >= distanceN){
                k = n-1;
                res+=distanceN;
            }
        firstTime = false;
       }
        
        res+=A[k];
        A[k]=0;
        H[k]=1;
       
        if(k == 0 && H[k+1]==0){
            A[k+1]+=1;
            k++;
            res++;
        }
        else if(k == n-1 && H[k-1]==0){
              A[k-1]+=1;
               k--;
               res++;
        }else{
            // Siempre dejo la roca en el vecino True
            if(k!=0 && H[k+1]==1 && k+1 < n){
                A[k+1]+=1;
                k--;
                res++;
            }
            else if(k!=n-1 && H[k-1]==1 && k-1>=0){
                A[k-1]+=1;
                k++;
                res++;
            }
        }
       
        //cout<<"res 2: "<<res<<endl;
        //printArr(A,n);
        //printArr(H,n);
        //cout<<"-------------------"<<endl;
        
        int temp = 0;
        for(int i=0;i<n;i++)
            temp += (H[i]==0?1:0);
        sizeWalk = temp;
        //if(contador > 20)
        //    break;
    }
    //cout<<"A:";
    //printArr(A, n);
    //cout<<"H:";
    //printArr(H, n);
    //cout<<"contador:"<<contador<<endl;
    cout<<res<<endl;
    return 0;
}
