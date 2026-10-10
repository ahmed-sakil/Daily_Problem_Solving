#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
 

    string s;
    cin >> s;

    int c = 1, res = 1;

    for (int i =1; i <n; i++)
    {
        if (s[i] == s[i-1])
        {
            c++;
        }else
        {
            c = 1;
        }

        res = max(res, c);
    }

    cout << res + 1 << '\n';
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