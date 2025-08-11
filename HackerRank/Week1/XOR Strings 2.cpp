#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    int a=0;
    int b=0;
    for(int i = 0; i < s.size(); i++) {
       a = s[i]-'0';
       b=t[i]-'0';
         res += char((a ^ b) + '0');
         // res+=to_string(a^b)
    }

    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}



