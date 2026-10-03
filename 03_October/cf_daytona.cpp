#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, k;
    cin >> n >> k;

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == k)
            c++;
    }

    if (c)
        cout << "YES\n";
    else
        cout << "NO\n";
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