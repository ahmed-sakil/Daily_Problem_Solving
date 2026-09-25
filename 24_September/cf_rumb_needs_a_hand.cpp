#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        if (p[i] != i)
        {
            d.push_back(i);
        }
    }

    int sz = d.size();
    bool ok = true;
    for (int i = 0; i < sz; i++)
    {
        if (p[d[i]] != d[sz - 1 - i])
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
