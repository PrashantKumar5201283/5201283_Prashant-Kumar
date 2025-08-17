#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    unordered_map<char, int>mpp;
    for(auto i : s){
        mpp[i]++;
    }
    vector<int> arr;
    for(auto i : mpp){
        arr.push_back(i.second);
    }
    int n = arr.size();
    sort(arr.begin(), arr.end());
    if(arr.size()==1) return "YES";
    int first = arr[0];
    int last = arr[n-1];
    if(first == last )return "YES";
    int second = arr[1];
    int second_last = arr[n-2];
    if(second == last) return "YES";
    if(first == second && second ==last-1 && second_last!=last){ return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
