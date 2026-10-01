#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mn = a[0];
    int mx = a[0];
    int am = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            am++;
            mx = a[i];
        }
        else if (a[i] < mn)
        {
            am++;
            mn = a[i];
        }
    }

    cout << am << '\n';
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