#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int cnt[105] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<int> result;

    while (result.size() < n)
    {
        int leader = -1;
        for (int i = 100; i >= 1; i--)
        {
            if (cnt[i] > 0)
            {
                leader = i;
                break;
            }
        }

        int c = cnt[leader];

        for (int i = 0; i < c; i++)
        {
            result.push_back(leader);
        }
        cnt[leader] = 0;

        for (int i = 100; i >= 1; i--)
        {
            if (cnt[i] > 0)
            {
                int take = min(cnt[i], c);
                for (int j = 0; j < take; j++)
                {
                    result.push_back(i);
                }
                cnt[i] -= take;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << (i + 1 < n ? " " : "\n");
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