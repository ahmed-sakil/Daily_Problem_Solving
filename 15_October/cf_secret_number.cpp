#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n;
    cin >> n;

    vector<long long> a;
    long long p = 10;

    while (p + 1 <= n)
    {
        long long d = (long long)(p + 1);

        if (n % d == 0)
        {
            a.push_back(n /d);
        }

        p *= 10;
    }

    sort(a.begin(), a.end());

    cout << a.size();

    for (long long x : a)
    {
        cout << " " << x;
    }

    cout << '\n';
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