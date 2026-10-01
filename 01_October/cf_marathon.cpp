#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = 0;

    if (b > a)
        x++;
    if (c > a)
        x++;
    if (d > a)
        x++;

    cout << x << '\n';
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