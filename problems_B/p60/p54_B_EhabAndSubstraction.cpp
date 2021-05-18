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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int ll;
typedef unsigned long long int uint64;
typedef long double ld80;

using namespace std;
void printArr(int A[], int n){
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
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
    int n, k, a;
    cin>>n>>k;
    set <int> set1;
    for(int i=0;i<n;i++){
        cin>>a;
        set1.insert(a);
    }
    set <int>::iterator itr=set1.begin();
    int i=0;
    int acminVal=0;
    int cminVal=0;
    while(i<k){
        cminVal=*itr;
        //cout<<*itr<<endl;
        if(itr!=set1.end()){
            cout<<cminVal-acminVal<<endl;
            acminVal+=(cminVal-acminVal);
            itr++;
        }else{
            cout<<0<<endl;
        }
        i++;
    }
    return 0;
}

