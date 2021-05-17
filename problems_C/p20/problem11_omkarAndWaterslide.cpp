#include <iostream>
#include <stack>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int maxVal = 0;
        for(int i = 0; i < n; i++){
            int num;            
            scanf("%d", &num);
            A[i] = num;
            maxVal = max(num, maxVal);
        }
        
        //cout<<maxVal<<endl;
        for(int i = 0; i < n; i++){
            A[i] = maxVal - A[i];
            //cout<<A[i]<<" ";
        }
        //cout<<endl<<endl;
        
        stack<int> s1;
        bool existIncr = false;
        long long int op = 0;
        for(int i = 0; i < n; i++){
            //cout<<" i: "<<i<<" A[i]: "<<A[i]<<" - ";
            if(i+1 < n && A[i] < A[i+1]){
                //cout<<"1. push: "<<A[i+1]<<endl;
                existIncr = true;
                s1.push(A[i+1]);
                i += 2;
            }
            if(existIncr && i < n && A[i] != 0){
                //cout<<"2. push: "<<A[i]<<endl;
                s1.push(A[i]);
            }else{
                //cout<<"inStack"<<endl;
                existIncr = false;
                int s1n = s1.size();
                long long int maxOp = 0;
                while(!s1.empty()){
                    long long int cV = s1.top();
                    //cout<<cV<<endl;
                    maxOp = max(cV, maxOp);
                    //cout<<"maxOp: "<<maxOp<<endl;
                    s1.pop();
                }
                op += maxOp;
            }
            //cout<<endl;
        }
        cout<<op<<endl;
    }
    return 0;
}
