#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

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
        if(L[i]<R[j])
            A[k++]=L[i++];
        else
            A[k++]=R[j++];
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
    int n;
    cin>>n;
    cin.ignore();
    int A[n];
    int x;
    unordered_map<int,vector<int> > umap;
    for(int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
        umap[x].push_back(i+1);
    }
    merge(A,0,n-1);
    int i=0;
    while(i<n/2){
        int card1=A[i];
        int card2=A[n-1-i];
        int idx_card1 = umap[card1].back();
        umap[card1].pop_back();
        int idx_card2 = umap[card2].back();
        umap[card2].pop_back();
        cout<<idx_card1<<" "<<idx_card2<<endl;
        i++;
    }
    return 0;
}
