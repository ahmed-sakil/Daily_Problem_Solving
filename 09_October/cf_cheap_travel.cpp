#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int x = n * a;
    int y = (n / m) * b + min((n % m) * a, b);
    int c =min(x, y);

    cout << c << '\n';
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