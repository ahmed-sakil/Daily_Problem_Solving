#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> value, count;
    for (int i = 0; i < n; i++)
    {
        if (value.empty() || a[i] != value.back())
        {
            value.push_back(a[i]);
            count.push_back(1);
        }
        else
        {
            count.back()++;
        }
    }

    int m = value.size();

    bool can2 = false;
    for (int i = 0; i < m - 1; i++)
    {
        if (count[i] >= 2 && count[i + 1] >= 2)
        {
            can2 = true;
            break;
        }
    }

    if (can2)
    {
        cout << m + 2 << "\n";
        return;
    }

    bool can1 = false;
    for (int i = 0; i < m; i++)
    {
        if (count[i] >= 2)
        {
            if (i + 1 < m)
            {
                if (i + 2 >= m || value[i] != value[i + 2])
                {
                    can1 = true;
                    break;
                }
            }

            if (i - 1 >= 0)
            {
                if (i - 2 < 0 || value[i] != value[i - 2])
                {
                    can1 = true;
                }
            }
        }
    }
    if (can1)
    {
        cout << m + 1 << "\n";
    }
    else
    {
        cout << m << "\n";
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
        solve();
    }

    return 0;
}