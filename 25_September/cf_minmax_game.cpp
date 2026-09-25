#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            count1++;
        } else {
            count0++;
        }
    }
    if (count1 >= count0) {
        cout << "Bessie\n";
    } else {
        cout << "Elsie\n";
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