#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
# include <queue>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalQueries;
    cin >> totalQueries;  
    queue<int> q;

    while(totalQueries--){  
        int type;
        cin >> type;

        if(type == 1){  
            int num;
            cin >> num;
            q.push(num);
        }
        else if(type == 2){ 
            if(!q.empty()){
                q.pop();
            }
        }
        else if(type == 3){  
            if(!q.empty()){
                cout << q.front() << "\n";
            }
        }
    }
    return 0;
}
