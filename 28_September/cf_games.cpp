#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (a[i].first == a[j].second)
            {
                c++;
            }
        }
    }
    cout << c << "\n";
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