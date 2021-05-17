#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int P[n+1];
    for(int i = 1; i < n+1; i++)
        P[i] = temp--;
    bool never_enter = true;
    int perfPerm = 0; // Perfect permutation of size n
    set<int, greater<int> > s1;
    for(int i = 1; i < n+1; i++){
        if(P[i] != i && P[P[i]] == i){
            never_enter = false;
            s1.insert(P[i]);
            perfPerm++;
        }
    }
    if(never_enter || perfPerm != n)
        cout<<-1<<" ";
    if(perfPerm == n){
        for(set<int, greater<int> >::iterator it = s1.begin(); it != s1.end(); it++)
            cout<<*it<<" ";
    }
    
    return 0;
}
