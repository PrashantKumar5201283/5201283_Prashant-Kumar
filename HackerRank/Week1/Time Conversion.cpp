#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
  string hr = s.substr(0, 2);
  string mt = s.substr(3, 2);
  string sec = s.substr(6, 2);
  string zone = s.substr(8, 2);

  int hour = stoi(hr);

  if (zone == "AM")
  {
    if (hour == 12)
      hour = 0;
  }
  else
  { // PM
    if (hour != 12)
      hour += 12;
  }

  stringstream result;
  result << setw(2) << setfill('0') << hour << ":" << mt << ":" << sec;
  return result.str();
}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
