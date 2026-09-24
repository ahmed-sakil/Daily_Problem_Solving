#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int a, b;
    cin >> a >> b;

    int x = a % b;

    if (x)
        cout << b - x << "\n";
    else{
        cout << 0 << "\n";
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