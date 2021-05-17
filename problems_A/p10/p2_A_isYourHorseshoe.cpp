#include <iostream>
#include <set>
#include <iterator>
#include <unordered_map>

using namespace std;

int main(){
   int num;
   int n = 4;
   int pos = 0;
   set<int> s1;
   unordered_map<int, int> umap;
   while(n--){
        cin>>num;
        s1.insert(num);
        umap[num]++;
   }
   int cont = 0;
   bool has2 = false;
   set<int>::iterator itr;
   for(itr = s1.begin(); itr != s1.end(); itr++){
       if(umap[*itr] == 4){
            cont = 3;
            break;
        }
        if(umap[*itr] == 3){
            cont = 2;
            break;
        }
        if(umap[*itr] == 2){
            cont += 1;
        }
   }
    cout<<cont<<endl;
}
