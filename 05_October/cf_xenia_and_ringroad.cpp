#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;

    int a = 1;
    long long c = 0;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;

        if (y >= a)
        {
            c += y - a;
        }
        else
        {
            c += (n - a) + y;
        }

        a = y;
    }

    cout << c << '\n';
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    // cin >> test_cases;

    while (test_cases--)
    {
        solved_by_sakil();
    }

    return 0;
}