#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int c = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            c++;
            ans = max(ans, c);
        }
        else
        {
            c = 0;
        }
    }

    cout << ans << '\n';
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