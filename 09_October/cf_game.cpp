#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;


    int x = 0;
    int y = 0;


    for (char c : s)
    {
        if (c == '0')
        {
            x++;
        }else
        {
            y++;
        }
    }


    int c = min(x, y);

    if (c % 2 == 1)
    {
        cout << "DA\n";
    }else
    {
        cout << "NET\n";
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