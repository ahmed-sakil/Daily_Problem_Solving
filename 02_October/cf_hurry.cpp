#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, k;
    cin >> n >> k;

    int t = 240 - k;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) * 5 <= t)
        {
            t -= (i + 1) * 5;
            c++;
        }
    }
    cout << c << "\n";
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
