#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr;

    int prv = -1, mx = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);

        if (x >= prv)
        {
            c++;
        }
        else
        {
            if (mx < c)
            {
                mx = c;
            }
            c = 1;
        }
        prv = x;
    }
    if (mx < c)
    {
        mx = c;
    }
    cout << mx << "\n";

    return 0;
}