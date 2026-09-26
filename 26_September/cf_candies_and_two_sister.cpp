#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int arr[4] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x - 1]++;
    }
    int c = 0;
    c += arr[3];
    c += arr[2];
    arr[0] = max(0, arr[0] - arr[2]);
    c += arr[1] / 2;
    if (arr[1] % 2 == 1)
    {
        c++;
        arr[0] = max(0, arr[0] - 2);
    }
    c += (arr[0] + 3) / 4;

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
