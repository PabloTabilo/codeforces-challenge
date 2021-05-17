#include<iostream>

using namespace std;

void merge(int A[], int l, int m, int r){
    int n1 = m - l +1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
        L[i] = A[l+i];
    for(int i=0;i<n2;i++)
        R[i] = A[m+i+1];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i] < R[j])
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    for(;i<n1;i++)
        A[k++]=L[i];
    for(;j<n2;j++)
        A[k++]=R[j];
}


void mergeSort(int A[], int l, int r){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(A, l, m);
        mergeSort(A, m+1, r);
        merge(A, l, m, r);
    }
}

int main(){
    int n, a;
    cin>>n;
    int A[n];
    int maxRecord=-1;
    for(int i=0;i<n;i++){
        cin>>a;
        A[i] = a;
        maxRecord=max(maxRecord,a);
    }
    mergeSort(A, 0, n-1);
    int res=0;
    for(int i=0;i<n;i++){
        if(A[i] == maxRecord)
            break;
        res+=abs(maxRecord - A[i]);
    }
    cout<<res<<endl;
    return 0;
}
