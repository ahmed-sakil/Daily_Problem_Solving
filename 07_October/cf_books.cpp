#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    long long t;
    cin >> n >> t;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int y = 0;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        while (sum > t)
        {
            sum -= a[y];
            y++;
        }

        res = max(res, i - y + 1);
    }

    cout << res << '\n';
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