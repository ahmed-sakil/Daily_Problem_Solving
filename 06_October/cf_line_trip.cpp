#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, x;
    cin >> n >> x;

    vector<int> a;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if (i == 0)
        {
            mx = y;
        }
        else
        {
            {
                if (y - a[i - 1] > mx)
                    mx = y - a[i - 1];
            }
        }

        if (i == n - 1 && 2 * (x - y) > mx)
        {
            mx = 2 * (x - y);
        }

        a.push_back(y);
    }

    cout << mx << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    cin >> test_cases;

    while (test_cases--)
    {
        solved_by_sakil();
    }

    return 0;
}