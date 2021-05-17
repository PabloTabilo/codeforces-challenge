#include<iostream>
#include<set>
#include<string>
#include<regex>
#include<vector>

using namespace std;
 
typedef long long ll;
 
int main() {
    int n, m;
    cin >> m >> n;
    vector<int> cnt(n);
    while (m--) {
        int k;
        cin >> k;
        vector<int> ys(k);
        for (auto &y : ys) {
            cin >> y;
            cnt[y - 1]++;
        }
    }
    for (auto &x : cnt) {
        if (x <= 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
