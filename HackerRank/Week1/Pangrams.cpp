#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
  vector<int> count(26, 0);
  for (auto c : s)
  {
    if (isalpha(c))
    {
      c = tolower(c);
      count[c - 'a'] = 1;
    }
  }
  for (auto c : count)
  {
    if (c == 0)
    {
      return "not pangram";
    }
  }
  return "pangram";
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = pangrams(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
