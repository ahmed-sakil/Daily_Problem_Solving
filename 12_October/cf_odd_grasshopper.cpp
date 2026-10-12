#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long x0, n;
    cin >> x0 >> n;


    long long d = 0;

    if (n % 4 == 1)
    {
        d = -n;
    }else if (n % 4 == 2)
    {
        d = 1;
    }else if (n % 4 == 3)
    {
        d = n + 1;
    }



    if (x0 % 2 == 0)
    {
        cout << x0 + d << '\n';
    }else
    {
        cout << x0 - d << '\n';
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