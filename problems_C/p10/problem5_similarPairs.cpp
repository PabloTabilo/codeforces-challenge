
#include <iostream>


using namespace std;

class MyMerge{

    public:
        void mergeSort(int A[], int l, int mid, int r){
            int n1 = mid - l + 1;
            int n2 = r - mid;
            int L[n1];
            int R[n2];
            for(int i = 0; i < n1; i++)
                L[i] = A[l + i];
            for(int i = 0; i < n2; i++)
                R[i] = A[mid + 1 + i];
            int i = 0, j = 0, k = l;
            while(i < n1 && j < n2){
                if(L[i] < R[j])
                    A[k++] = L[i++];
                else
                    A[k++] = R[j++];
            }
            for(;i<n1;i++)
                A[k++] = L[i];
            for(;j<n2;j++)
                A[k++] = R[j];
        }
        
        void merge(int A[], int l, int r){
            if(l<r){
               int mid = (l + r) / 2;
               merge(A, l, mid);
               merge(A, mid+1, r);
               mergeSort(A, l, mid, r);
            }
        }
        void printArr(int A[], int n){
            for(int i = 0; i < n; i++)
                cout<<A[i]<<" ";
            cout<<endl;
        }
};

int main(){
   int t, n;
   scanf("%d", &t);
   while(t--){
    scanf("%d", &n);
    int A[n];
    int contadorEven = 0;
    int contadorDist = 0;
    int contadorOdd = 0;

    //bool checkEven[n];
    //bool checkDist[n];

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        A[i] = num;
        //checkEven[i] = false;
        //checkDist[i] = false;
    }
    
    MyMerge mg;
    mg.merge(A, 0, n-1);
    //mg.printArr(A, n);
    for(int i = 0; i < n; i++){
       if(A[i]%2==0){
            //checkEven[i] = true;
            contadorEven++;
       }else{
            contadorOdd++;
       }

       if(i > 0 && A[i]-A[i-1] == 1){
            //checkDist[i] = true;
            contadorDist++;
       }
    }
    //cout<<contadorEven<<endl;
    //cout<<contadorOdd<<endl;
    //cout<<contadorDist<<endl;
    cout<<(2*((contadorEven/2)+(contadorOdd/2) + contadorDist)>=n?"YES":"NO")<<'\n';
    // si sumo y da par even, ademas par dist yes!

   }

   return 0;
}
