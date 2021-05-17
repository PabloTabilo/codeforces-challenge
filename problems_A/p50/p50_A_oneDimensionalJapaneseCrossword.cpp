#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s1;
    cin.ignore();
    getline(cin,s1);
    int count=0;
    int temp_num=0;
    int finalCount=0;
    string res="";
    for(int i=0;i<n;i++){
        if(s1[i]=='B'){
            if(temp_num==0){
                count++;
                finalCount++;
            }
            temp_num++;
        }else{
            if(temp_num!=0)
                res+=to_string(temp_num) + " ";
            count=0;
            temp_num=0;
        }
        //cout<<"s1[i]: "<<s1[i]<<endl;
        //cout<<"count: "<<count<<endl;
        //cout<<"temp_num: "<<temp_num<<endl;
    }
    if(temp_num!=0)
        res+=to_string(temp_num) + " ";
    cout<<finalCount<<endl;
    if(finalCount!=0)
        cout<<res<<endl;
    return 0;
}
