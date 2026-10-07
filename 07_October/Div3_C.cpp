#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, i;
    cin >> n;


    vector<long long> a(n);
    for (int i =0; i <n; i++)
    {
        cin >> a[i];
    }

    int m = n - 4;
    vector<long long> v(m);
    map<long long, long long> count_val;
    for (i =0; i < m; i++){
        v[i] = a[i] + a[i + 2] - a[i + 4];
        count_val[v[i]]++;
    }

    long long ans = 0;
    for (auto p : count_val)
    {
        long long k = p.second;
        ans += k * (k - 1) / 2;
    }



    for (i =0; i <m; i++)
    {
        if (i + 2 < m && (v[i]==v[i+2]))
        {
            ans--;
        }

        if (i + 4 < m && (v[i]==v[i+4]))
        {
            ans--;
        }
    }

    cout << ans << "\n";
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