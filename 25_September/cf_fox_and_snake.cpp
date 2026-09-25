#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n, string(m, '.'));

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < m; j++)
                grid[i][j] = '#';
        }
        else if(i % 4 == 1)
        {
            grid[i][m - 1] = '#';
        }
        else
        {
            grid[i][0] = '#';
        }
    }

    for(string row : grid)
        cout << row << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solved_by_sakil();

    return 0;
}