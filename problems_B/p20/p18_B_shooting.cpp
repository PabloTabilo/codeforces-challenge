#include<iostream>
#include<unordered_map>
#include<stack>

using namespace std;

void printArr(int A[], int n){
    for(int i=0;i<n;i++)
        cout<<A[i]+1<<" ";
    cout<<endl;
}

void mergeSort(int A[], int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
        L[i]=A[l+i];
    for(int i=0;i<n2;i++)
        R[i]=A[m+i+1];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(L[i]>R[j]){
            A[k++]=L[i++];
        }else{
            A[k++]=R[j++];
        }
    }
    for(;i<n1;i++)
        A[k++]=L[i];
    for(;j<n2;j++)
        A[k++]=R[j];
}

void merge(int A[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        merge(A, l, m);
        merge(A,m+1,r);
        mergeSort(A,l,m,r);
    }
}

int main(){
    int n, x;
    unordered_map<int, stack<int> > umap;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
        umap[x].push(i);
    }
    merge(A, 0, n-1);
    int res=0;
    for(int i=0;i<n;i++){
        res+=A[i]*i+1;
    }
    cout<<res<<endl;
    for(int i=0;i<n;i++){
        cout<<umap[A[i]].top()+1<<" ";
        umap[A[i]].pop();
    }
    cout<<endl;
    return 0;
}
