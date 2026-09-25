#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != n)
        {
            if (i % 2 != 0)
            {
                cout << "I love that ";
            }
            else
            {
                cout << "I hate that ";
            }
        }
        else
        {
            if (i % 2 != 0)
            {
                cout << "I love it\n";
            }
            else
            {
                cout << "I hate it\n";
            }
        }
    }
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