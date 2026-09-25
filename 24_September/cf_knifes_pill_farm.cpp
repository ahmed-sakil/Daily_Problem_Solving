#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (m == 1)
    {
        long long mx = a[0];
        for (int i = 1; i < n; i++)
        {
            mx = max(mx, a[i]);
        }
        cout << mx << "\n";
        return;
    }
    int k = m - 1;
    priority_queue<long long> pq;
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        pq.push(a[i]);
        sum += a[i];
    }
    long long max_score = LLONG_MIN;
    for (int i = k; i < n; i++)
    {
        long long current_score = (long long)m * a[i] - sum;
        max_score = max(max_score, current_score);
        if (a[i] < pq.top())
        {
            sum -= pq.top();
            pq.pop();
            pq.push(a[i]);
            sum += a[i];
        }
    }
    cout << max_score << "\n";
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