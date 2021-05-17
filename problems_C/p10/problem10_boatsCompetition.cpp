#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<stack>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int temp[n];
        int i = 0;
        while(i < n){
            int w;
            scanf("%d", &w);
            A[i] = w;
            temp[i] = w;
            i++;
        }

        unordered_map<int,int> umap;
        stack<int> ss;
        int key, s;
        int maxEquip = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                key = A[i] + A[j];
                umap[key]++;
                if(maxEquip <= umap[key]){
                    s = key;
                    if(ss.empty()){
                        ss.push(s);
                    }else{
                        if(ss.top() != s){
                            ss.push(s);
                        }
                    }
                    maxEquip = max(maxEquip, umap[key]);
                }
            }
        }
        
        int numEq = 0;
        while(!ss.empty()){
            int numEqLocal = 0;
            s = ss.top();
            ss.pop();
            //cout<<s<<endl;
            for(int i = 0; i < n-1; i++){
                for(int j = i+1; j < n; j++){
                    //cout<< temp[i] + temp[j]<<endl;
                    if(temp[i] + temp[j] == s){
                        numEqLocal++;
                        temp[i] = -99;
                        temp[j] = -99;
                    }
                }
            }
            numEq = max(numEq, numEqLocal);
            for(int i= 0; i < n; i++){
                temp[i] = A[i];
            }
        }
        //cout<<endl<<endl;
        //cout<<"ans: ";
        cout<<numEq<<endl;
    }

    return 0;
}
