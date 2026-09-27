#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    int arr[2000] = {0};
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        for (int j = 0; j < 100; j++)
        {
            long long sum = 0;
            while (x > 0)
            {
                long long d = x % 10;
                sum += d * d;
                x /= 10;
            }
            x = sum;
        }
        arr[x]++;
    }

    long long res = 0;
    for (int i = 1; i < 2000; i++)
    {
        if (arr[i] > 1)
        {
            long long y = 1LL * arr[i] * arr[i];
            res += (y - arr[i]) / 2;
        }
    }
    cout << res << "\n";
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