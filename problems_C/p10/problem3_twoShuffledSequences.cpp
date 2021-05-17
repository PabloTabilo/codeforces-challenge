#include <iostream>
//#include <bits/stdc++.h>
//#include <vector> 
//#include <string>
//#include <stdio.h>
#include <unordered_map>
//#include <map>
#include <queue>

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


void showq(queue<int> gq){
    queue<int> g = gq;
    cout<<g.size()<<'\n';
    if(g.empty()){
        cout<<'\n';
    }
    while(!g.empty()){
        cout<< g.front() <<" ";
        g.pop();
    }
}

int main(){
    int n;
    scanf("%d", &n);
    bool check[n];
    int A[n];
    unordered_map<int, int> umap;
    bool imposible = false;

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        A[i] = num;
        check[i] = false;
        umap[A[i]]++;
        if(umap[A[i]] > 2){
            imposible = true;        
        }
    }
  
    if(!imposible){
        cout<<"YES"<<'\n';
        MyMerge mg;
        mg.merge(A, 0, n-1);
    
        queue<int> q1, q2;

        for(int i = n-1; i >= 0; i--){
            if(!check[i]){
                if(q1.empty()){
                    q1.push(A[i]);
                    check[i]=true;
                }
                else if(A[i]!=q1.back()){
                    check[i]=true;
                    q1.push(A[i]);
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(!check[i]){
                if(q2.empty()){
                    q2.push(A[i]);
                    check[i]=true;
                }
                else if(A[i] != q2.back()){
                    check[i]=true;
                    q2.push(A[i]);
                }
            }
        }

        showq(q2);
        cout<<endl;
        showq(q1);
    }else
        cout<<"NO";
    return 0;
}
