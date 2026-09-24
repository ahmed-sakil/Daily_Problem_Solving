#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    double total = 0;
    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        total += p;
    }

    double ans = total / n;

    cout << fixed << setprecision(12) << ans << "\n";
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