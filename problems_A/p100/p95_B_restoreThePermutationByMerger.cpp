#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        cin.ignore();
        int A[51]={0};
        int invA[51]={0};
        int tmp;
        int first=1;
        for(int i=0;i<2*n;i++){
            cin>>tmp;
            //cin.ignore();
            if(A[tmp] == 0){
                A[tmp]=first;
                invA[first]=tmp;
                first++;
            }
        }
        vector<int> sortMe;
        for(int i=0;i<51;i++){
            if(A[i] != 0)
                sortMe.push_back(A[i]);
        }
        sort(sortMe.begin(), sortMe.end());
        int sizeS=sortMe.size();
        for(int i=0;i<sizeS;i++){
            cout<<invA[sortMe[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
