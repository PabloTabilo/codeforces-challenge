#include<iostream>
using namespace std;

void merge(int A[], int l, int mid, int r){
    int n1 = mid - l +1;
    int n2 = r - mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
        L[i] = A[l + i];
    for(int i=0;i<n2;i++)
        R[i] = A[mid + i + 1];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i] < R[j]){
            A[k++] = L[i++];
        }else{
            A[k++] = R[j++];
        }
    }
    for(;i<n1;i++)
        A[k++]=L[i];
    for(;j<n2;j++)
        A[k++]=R[j];
}

void mergeSort(int A[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(A, l, mid);
        mergeSort(A, mid+1,r);
        merge(A, l, mid, r);
    }
}

void arrayPrint(int A[], int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, d, x;
    cin>>n>>d;
    cin.ignore();
    int A[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A[i]=x;
    }
    //arrayPrint(A, n);
    mergeSort(A, 0, n-1);
    //arrayPrint(A, n);
    
    int i=0;
    int pos=0;
    int dist;
    while(i<n){
        for(int j=i-1;j>=0; j--){
            dist = abs(A[i] - A[j]);
            if(dist<=d){
                pos++;
            }else{
                break;
            }
        }
        for(int k=i+1; k<n; k++){
            dist = abs(A[i] - A[k]);
            if(dist<=d){
                pos++;
            }else{
                break;
            }
        }
        i++;
    }
    cout<<pos<<endl;
    return 0;
}
