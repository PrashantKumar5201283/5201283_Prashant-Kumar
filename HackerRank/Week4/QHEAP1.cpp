#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; 
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> h;
    unordered_set<int> del;
    while (q--) {
        int t, x;
        cin >> t;
        if (t == 1) {
            cin >> x;
            h.push(x);
        } else if (t == 2) {
            cin >> x;
            del.insert(x);
        } else {
            while (!h.empty() && del.count(h.top())) {
                del.erase(h.top());
                h.pop();
            }
            cout << h.top() << "\n";
        }
    }
}
