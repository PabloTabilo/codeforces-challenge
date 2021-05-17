#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1;
    getline(cin, str1);
    int n = str1.size();
    char x;
    int ascii_code;
    int A[3]={0};
    for(int i=0;i<n;i++){
        x = str1[i];
        ascii_code = x - '0';
        if(ascii_code >= 1)
            A[ascii_code-1]++;
        //cout<<ascii_code<<endl;
    }
    //cout<<A[0]<<endl;
    //cout<<A[1]<<endl;
    //cout<<A[2]<<endl;
    string res="";
    int nums1 = A[0];
    int nums2 = A[1];
    int nums3 = A[2];
    for(int i=0;i<nums1;i++){
        res+="1";
        if(i == nums1-1)
            res+="";
        else
            res+="+";
    }

    if((nums1>0 && nums2>0) || (nums1>0 && nums3>0))
        res+="+";

    for(int i=0;i<nums2;i++){
        res+="2";
        if(i == nums2-1)
            res+="";
        else
            res+="+";
    }
    
    if(nums2>0 && nums3>0)
        res+="+";

    for(int i=0;i<nums3;i++){
        res+="3";
        if(i == nums3-1)
            res+="";
        else
            res+="+";
    }

    cout<<res<<endl;
    return 0;
}
