#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[i] != a[i + 1] && a[i] != a[i + 2])
            {
                cout << i + 1 << "\n";
                return;
            }
        }
        else if (i == n - 1)
        {
            if (a[i] != a[i - 1] && a[i] != a[i - 2])
            {
                cout << i + 1 << "\n";
                return;
            }
        }
        else
        {
            if (a[i] != a[i - 1] && a[i] != a[i + 1])
            {
                cout << i + 1 << "\n";
                return;
            }
        }
    }
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