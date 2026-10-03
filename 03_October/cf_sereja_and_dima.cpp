#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int l = 0;
    int r = n - 1;

    int sereja = 0;
    int dima = 0;

    bool st = true;

    while (l <= r)
    {

        int chosen;

        if (c[l] > c[r])
        {
            chosen = c[l];
            l++;
        }
        else
        {
            chosen = c[r];
            r--;
        }

        if (st)
            sereja += chosen;
        else
            dima += chosen;

        st = !st;
    }

    cout << sereja << " " << dima << '\n';
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