#include <bits/stdc++.h>
using namespace std;

int flippingMatrix(vector<vector<int>> matrix)
{
  int n = matrix.size() / 2;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum += max({matrix[i][j],
                  matrix[i][2 * n - j - 1],
                  matrix[2 * n - i - 1][j],
                  matrix[2 * n - i - 1][2 * n - j - 1]});
    }
  }
  return sum;
}

int main()
{
  vector<vector<int>> mat = {
      {112, 42, 83, 119},
      {56, 125, 56, 49},
      {15, 78, 101, 43},
      {62, 98, 114, 108}};
  cout << "Max sum in top-left quadrant: " << flippingMatrix(mat) << endl;
  return 0;
}
