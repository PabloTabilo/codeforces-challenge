#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    
    unordered_map<char,int> umap;
    int n1 = s1.size();
    for(int i=0;i<n1;i++){
        umap[s1[i]]++;
    }
    int n2 = s2.size();
    for(int i=0;i<n2;i++){
        umap[s2[i]]++;
    }
    int n3 = s3.size();
    for(int i=0;i<n3;i++){
        umap[s3[i]]-=1;
    }
    bool res = true;
    unordered_map<char,int>::iterator it;
    for(it=umap.begin(); it!=umap.end();it++){
        //cout<<it->first<<" : "<<it->second<<endl;
        if(it->second != 0){
            res=false;
            break;
        }
    }
    if(!res)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;

    return 0;
}
