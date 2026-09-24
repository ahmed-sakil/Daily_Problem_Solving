#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max_pieces = 0;
    for (int x = 0; x * a <= n; x++)
    {
        for (int y = 0; x * a + y * b <= n; y++)
        {
            int rem = n - (x * a + y * b);
            if (rem % c == 0)
            {
                int z = rem / c;
                max_pieces = max(max_pieces, x + y + z);
            }
        }
    }
    cout << max_pieces << "\n";
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