#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bomberMan' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY grid
 */

#include <bits/stdc++.h>
using namespace std;

vector<string> makeFull(int rows, int cols) {
    vector<string> grid(rows);
    for (int r = 0; r < rows; r++) {
        string row(cols, 'O');
        grid[r] = row;
    }
    return grid;
}

vector<string> detonate(const vector<string>& state) {
    int rows = state.size();
    int cols = state[0].size();
    vector<string> nextState(rows, string(cols, 'O'));

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (state[r][c] == 'O') {
                nextState[r][c] = '.';
                for (int k = 0; k < 4; k++) {
                    int nr = r + dx[k];
                    int nc = c + dy[k];
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
                        nextState[nr][nc] = '.';
                    }
                }
            }
        }
    }
    return nextState;
}

vector<string> bomberMan(int seconds, vector<string> initial) {
    int rows = initial.size();
    int cols = initial[0].size();

    if (seconds == 1) {
        return initial;
    }
    if (seconds % 2 == 0) {
        return makeFull(rows, cols);
    }

    vector<string> firstBlast = detonate(initial);
    vector<string> secondBlast = detonate(firstBlast);

    if ((seconds - 3) % 4 == 0) {
        return firstBlast;
    }
    return secondBlast;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int r = stoi(first_multiple_input[0]);

    int c = stoi(first_multiple_input[1]);

    int n = stoi(first_multiple_input[2]);

    vector<string> grid(r);

    for (int i = 0; i < r; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = bomberMan(n, grid);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
