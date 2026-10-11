#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    vector<int> a(5);
    cin >> a[1] >> a[2] >> a[3] >> a[4];

    string s;
    cin >> s;

    long long c = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        int st = s[i] - '0';
        c += a[st];
    }
    cout << c << '\n';
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