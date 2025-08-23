#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'legoBlocks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long mpow(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}

int legoBlocks(int n, int m) {
    vector<long long> r(m+1), t(m+1), s(m+1);
    r[0] = 1;
    for (int i = 1; i <= m; i++) {
        r[i] = r[i-1];
        if (i > 1) r[i] = (r[i] + r[i-2]) % MOD;
        if (i > 2) r[i] = (r[i] + r[i-3]) % MOD;
        if (i > 3) r[i] = (r[i] + r[i-4]) % MOD;
    }
    for (int i = 1; i <= m; i++) t[i] = mpow(r[i], n);
    for (int i = 1; i <= m; i++) {
        long long v = t[i];
        for (int j = 1; j < i; j++) v = (v - s[j] * t[i-j]) % MOD;
        if (v < 0) v += MOD;
        s[i] = v;
    }
    return (int)s[m];
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = legoBlocks(n, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
