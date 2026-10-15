#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;

    int x = 0, y = 0;


    for (char c : s)
    {
        if (c == '0')
            x++;
        else
            y++;
    }

    int cost = 0;

    for (char c : s)
    {


        if (c == '0' && y > 0)
        {
            y--;
        }else if (c == '1' && x > 0)
        {

            x--;
        }else
        {
            break;
        }
    }

    cout << s.size() - cost - (s.size() - (x + y)) << '\n';
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