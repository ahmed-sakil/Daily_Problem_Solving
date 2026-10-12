#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n;
    cin >> n;

    for (int k = 2; k <= 30; k++)
    {

        long long val = (1LL << k) - 1;

        if (n % val == 0)
        {
            cout << n / val << '\n';
            return;
        }


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