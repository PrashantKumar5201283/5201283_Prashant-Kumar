#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S = "";
    stack<string> str;

    while (N--) {
        int type;
        cin >> type;

        if (type == 1) {          
            string w;
            cin >> w;
            str.push(S);          
            S += w;

        } else if (type == 2) {    
            int k;
            cin >> k;
            str.push(S);           
            S.erase(S.size() - k);

        } else if (type == 3) {    
            int k;
            cin >> k;
            cout << S[k - 1] << endl;

        } else if (type == 4) {    
            if (!str.empty()) {
                S = str.top();     
                str.pop();
            }
        }
    }
    return 0;
}
