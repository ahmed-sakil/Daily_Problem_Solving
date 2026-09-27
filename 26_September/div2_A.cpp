#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{

    long long n, k;
    cin >> n >> k;

    long long x = 2 * (k-1);
    n = n - k;
    x += pow(2, (n +1));
    cout << x << "\n";
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