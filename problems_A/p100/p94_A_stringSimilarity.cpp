#include<iostream>
#include<string>

using namespace std;

int main(){
    int t, n;
    int ascii_code;
    string s1;
    string sub_s1;
    cin>>t;
    cin.ignore();
    while(t--){
        string res="";
        cin>>n;
        cin.ignore();
        getline(cin, s1);
        int size=s1.size();
        int A[n];
        for(int i=0;i<n;i++)
            A[i]=1;
        int num_sub=0;
        for(int i=size-n;i>=0;i--){
            num_sub++;
            sub_s1 = s1.substr(i,n);
            //cout<<"sub_s1: "<<sub_s1<<endl;
            for(int j=0;j<n;j++){
                ascii_code = sub_s1[j]-'0';
                A[j]*=ascii_code;
              }
        }
        //cout<<"num_sub: "<<num_sub<<endl;
        for(int i=0;i<n;i++){
            //cout<<"i: "<<i<<" A[i]: "<<A[i]<<endl;
            if (A[i] == 0)
                res+="0";
            else
                res+="1";
            //else if(A[i]==num_sub){
            //    res+="1";
            //}else{
            //    res+=(A[i]>=num_sub/2?"1":"0");
            //}
        }
        cout<<res<<endl;
    }
    return 0;
}
