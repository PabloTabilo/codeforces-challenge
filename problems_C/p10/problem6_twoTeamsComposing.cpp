#include <iostream>
#include <unordered_map>

using namespace std;


int main(){

    int t, n, num, totalDistinct, maxRepetition, totalRepetition, minRepetition;
    cin>>t;
    while(t--){
        cin>>n;
        int A[n];
        unordered_map<int, int> umap;
        totalRepetition = 0;
        totalDistinct = 0;
        maxRepetition = 0;
        minRepetition = 99999;
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            A[i] = num;
            umap[A[i]]++;
            maxRepetition = max(maxRepetition, umap[A[i]]);
        }
        for(unordered_map<int,int>::iterator it = umap.begin(); it != umap.end(); it++){
            if(it->second > 1){
                totalRepetition += it->first;
                minRepetition = min(minRepetition, it->second);
            }else{
                totalDistinct+= it->first;
            }
        }
        //cout<<repetition; 
        if(n>2){
            if(totalRepetition == 0){
                cout<<1;
            }
            else if(totalDistinct == 0){
                cout<<0;
            }else{
                    cout<<max(min(totalDistinct, maxRepetition-1), min(totalDistinct-1,maxRepetition));
            }
        }else{
            cout<<0;
        }
        cout<<'\n';
    }

    return 0;
}
