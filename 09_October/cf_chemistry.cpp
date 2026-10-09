#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> arr(26, 0);
    for (char c : s)
    {
        arr[c - 'a']++;
    }

    int c = 0;
    for (int i = 0; i < 26; i++)
    {

        if (arr[i] % 2 != 0)
        {
            c++;
        }
    }

    if (c - k <= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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