#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int x = 0, y = 0;

    for (int i =0; i <n; i++)
    {
        if (s[i] == '0')
        {
            x++;
        }else
        {
            y++;
        }
    }

    cout << abs(x-y) << endl;
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