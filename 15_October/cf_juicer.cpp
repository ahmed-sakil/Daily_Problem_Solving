#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n, b, d;
    cin >> n >> b >> d;

    long long x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        if (a <= b)
        {
            x += a;

            if (x > d)
            {
                y++;
                x = 0;
            }
        }
    }

    cout << y << '\n';
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